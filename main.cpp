#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define pb push_back
const int N = 1e5 + 10;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mii map<int, int>
#define setBits(a) (int)__builtin_popcountll(a)
#define mod 1000000007

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define input(a)      \
    for (auto &x : a) \
        cin >> x
#define output(a)             \
    {                         \
        for (auto &x : a)     \
            cout << x << ' '; \
        cout << endl;         \
    }
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)

int32_t main() {
    faster();
    testCase {
        int n, m;
        cin >> n >> m;
        vi a(n), b(m);
        input(a);
        input(b);
        if(m==1)
        {
            for(int i=0;i<n;i++)
            {
                a[i]=min(a[i],b[0]);
            }
            output(a);
        }
        else{

        int minIdx = 0;
        for (int i = 1; i < m; i++) {
            if (b[i] < b[minIdx]) {
                minIdx = i;
            }
        }

     
        vi minCycle;
        for (int i = 0; i < m; i++) {
            minCycle.push_back(b[(minIdx + i) % m]);
        }

        bool ok = false;
        for (int i = 0; i <= n - m; i++) {
           if(a[i]>minCycle[0])
           {
            ok=true;
             for(int j=i;j<=n-m;j++)
             {
                a[j]=minCycle[0];
             }
             for(int j=1;j<m;j++)
             {
                a[n+j-m]=minCycle[j];
             }
           }
        }
        if(ok)
        {
            output(a);
        }
        else{
            vi a1,a2;
            for(auto i:a)
            {
                a1.pb(i);
            }
            for(int i=0;i<n-m;i++)
            {
                a2.pb(a[i]);
            }
            for(int i=0;i<m;i++)
            {
                a2.pb(minCycle[i]);
            }
            auto ans=min(a1,a2);
            output(ans);
        }

       
       
        
    }

    }
}