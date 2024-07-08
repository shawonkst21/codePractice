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
        int n,m,s1,s2;
     bool f1=false,f2=false;
     cin>>n>>m;
     vector<int>p,q,x,y;
     char a[n][m],b[n][m];
     for(int i=0;i<n;i++)
     {
         s1=0;
         for(int j=0;j<m;j++)
         {
             cin>>a[i][j];
             s1+=(a[i][j]-'0');
         }
         p.push_back(s1%3);
     }
 
     for(int i=0;i<n;i++)
     {
         s2=0;
         for(int j=0;j<m;j++)
         {
             cin>>b[i][j];
             s2+=(b[i][j]-'0');
         }
         q.push_back(s2%3);
     }
 
     int s3,s4;
      for(int i=0;i<m;i++)
     {
         s3=0;
         s4=0;
         for(int j=0;j<n;j++)
         {
             s3+=(a[j][i]-'0');
             s4+=(b[j][i]-'0');
         }
         x.push_back(s3%3);
         y.push_back(s4%3);
     }
 
     for(int i=0;i<p.size();i++)
     {
         if(p[i]!=q[i])
         {
             f1=true;
             break;
         }
     }
 
     for(int i=0;i<x.size();i++)
     {
         if(x[i]!=y[i])
         {
             f2=true;
             break;
         }
     }
 
     if(f1 || f2)
     {
          no;
     }
     else
     {
          yes;
     }

     }
             
}