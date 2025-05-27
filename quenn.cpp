#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define pb push_back
//const int N = 1e5 + 10;
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
int N;
vector<vector<string>>result;
bool isvalid(int row,int col,vector<string>&board)
{
	for(int i=row-1;i>=0;i--)
	{
		if(board[i][col]=='Q')
		{
			return false;
		}

	}
	for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
	{
		if(board[i][j]=='Q')
		{
			return false;
		}
	}
	for(int i=row-1,j=col+1;i>=0 && j<N;i--,j++)
	{
		if(board[i][j]=='Q')
		{
			return false;
		}
	}
    return true;
}
void solve(int row,vector<string>&board)
{
	 if(row>=N)
	 {
	 	result.push_back(board);
	 	return;
	 }

	 for(int col=0;col<N;col++)
	 {
	 	  if(isvalid(row,col,board))
	 	  {
              board[row][col]='Q';
              solve(row+1,board);
              board[row][col]='.';
	 	  }
	 }
}
int32_t main() {
    faster();
    int n;
    cin>>n;
    N=n;
    vector<string>board(n,string(n,'.'));
    solve(0,board);
    for(auto &sol:result)
    {
    	for(auto &i:sol)
    	{
    		cout<<i<<endl;
    	}
    	cout<<endl;
    }
}
