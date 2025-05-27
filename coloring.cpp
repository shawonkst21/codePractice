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
bool isvalid(int node,vector<int>g[],vector<int>&color,int col)
{
	for(auto i:g[node])
	{
		if(color[i]==col)
		{
			return false;
		}
	}
	return true;
}
bool solve(int node,vector<int>g[],vector<int>&color,int n,int m)
{
	 if(node==n)
	 {
	 	return true;
	 }

	 for(int col=1;col<=m;col++)
	 {
	 	 if(isvalid(node,g,color,col))
	 	 {
                color[node]=col;
                if(solve(node+1,g,color,n,m)==true)
                	return true;
                color[node]=0;
	 	 }
	 }
	 return false;
}
int32_t main() {
    faster();
    int n,m;
    cin>>n>>m;
    vector<int>g[n];
    for(int i=0;i<m;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	g[u].push_back(v);
    	g[v].push_back(u);
    }
    int col=1;
    int ans=0;
    while(true)
    {
    	 vector<int>color(n,0);
         if(solve(0,g,color,n,col))
         {
            cout<<col<<endl;
            break;
         }
         col++;
    }
   
}
