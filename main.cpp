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
        int n,m;
        cin>>n>>m;
       vector<int>v(2010);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x;
                cin>>x;
                v[x]=i+1;
            }
        }
        vector<int>ans;
        vector<int>visited(n*m,-1);
        for(int i=0;i<n*m;i++)
        {
            if(visited[i]==-1)
            {
                int x=v[i];
            bool ok=true;
            for(int j=i;j<n*m;j+=n)
            {
                visited[j]=0;
                if(v[j]==x)
                {
                    continue;
                }
                else{
                    ok=false;
                    break;
                }
            }
            if(ok==true)
            {
                ans.push_back(x);
            }
            else{
                break;
            }
            }
        }
        if(ans.size()!=n)
        {
            cout<<"-1"<<endl;
            continue;
        }

            for(auto i:ans)
            {
                cout<<i<<' ';
            }cout<<endl;
        
       
       
    }
}

