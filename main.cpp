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
// int dx2[]={0,0,-1,1,1,1,-1,-1};
// int dy2[]={-1,1,0,0,1,-1,1,-1};
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mii map<int, int>
#define setBits(a) (int)__builtin_popcountll(a)
#define mod 1000000007
//priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;

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
    testCase{
        int n;
        cin>>n;
        vi v(n);
        input(v);
        bool ok=false;
        if(v[n-2]>v[n-1])
        {
            cout<<"-1"<<endl;
            continue;
        }
        vector<tuple<int,int,int>>ans;
        for(int i=n-3;i>=0;i--)
        {
            if(v[i]>v[i+1])
            {
                v[i]=v[i+1]-v[n-1];
                if(v[i]>v[i+1])
                {
                    ok=true;
                    break;
                }
                ans.pb({i+1,i+2,n});
            }
        }
        if(ok)
        {
              cout<<"-1"<<endl;

        }
        else{
            cout<<ans.size()<<endl;
              for (auto &t : ans) {
            cout << get<0>(t) << " " <<get<1>(t) << " " <<get<2>(t) << endl;
        }
        }
    }
}
