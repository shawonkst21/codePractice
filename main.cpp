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
        int n,m;
        cin>>n>>m;
        vector<int>v[m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x;
                cin>>x;
                v[j].push_back(x);
            }
        }
        for(int i=0;i<m;i++)
        {
            sort(begin(v[i]),end(v[i]));
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            vector<int>res(n,0);
            res[n-1]=v[i][n-1];
            for(int j=n-2;j>=0;j--)
            {
                res[j]=res[j+1]+v[i][j];
            }
            for(int j=0;j<n-1;j++)
            {
                ans+=(res[j+1]-(n-1-j)*v[i][j]);
            }
        }
        cout<<ans<<endl;
    }
}
