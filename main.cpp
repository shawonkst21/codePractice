#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define pb push_back  
const int N=1e5+10;
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
//int dx2[]={0,0,-1,1,1,1,-1,-1};
//int dy2[]={-1,1,0,0,1,-1,1,-1};
#define vi vector<int>
#define vp vector<pair<int,int>>
#define  mii map<int,int>
//priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
void faster()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)
bool solve(int n,int m)
{
      if(n==m)
      {
          return true;
      }
      else if(n%3!=0)
      {
          return false;
      }
      return ((solve(n/3,m))||(solve(2*n/3,m)));
}
int32_t main()
{
     faster();
     testCase
     {
        int n,m;
        cin>>n>>m;
        if(solve(n,m)==true)
        {
           yes;
        }
        else{
          no;
        }
     }
}



             
