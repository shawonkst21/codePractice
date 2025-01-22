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
        vector<vector<int>>adj(n+1);
        vector<int>deg(n+3,0);
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
            deg[u]++;
            deg[v]++;
        }
        int max1 = 0, node1 = -1;
        for (int i = 1; i <= n; i++) {
            if (deg[i] > max1) {
                max1 = deg[i];
                node1 = i;
            }
        }
        deg[node1] = 0;
        for(auto i:adj[node1])
        {
            deg[i]--;
        }
         int max2 = 0;
        for (int i = 1; i <= n; i++) {
            if (deg[i] > max2) {
                max2 = deg[i];
            }
        }
        cout<<(max1+max2)-1<<endl;
        
    }
}
