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
int32_t main()
{
     faster();
     testCase
     {
         int n,m;
         cin>>n>>m;
         vector<vector<int>>v(n,vector<int>(m));
            for(auto &i:v)
            {
               for(auto &j:i)
               {
                    cin>>j;
               }
            }
         if(n*m==1)
         {
           cout<<"-1"<<endl;
         }
         else
         {
            for(int i=0;i<n;i++)
            {
               for(int j=0;j<m;j++)
               {
                    cout<<v[(i+1)%n][(j+1)%m]<<" ";
               }cout<<endl;
            }
         }
     }
             
}