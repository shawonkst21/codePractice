#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
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
 vi dis;
 vi par;
void faster()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
#define testCase \
    int t;       \
    cin >> t;    \
    while(t--)

int32_t main()
{
     faster();
     testCase
     {
          int n;
          cin>>n;
          string str;
          cin>>str;
          int x=sqrt(n);
          if(x*x!=n)
          {
               no;
          }
          else
          {
               bool ok1=true;
               bool ok0=true;
               for(int i=1;i<=x;i++)
               {
                    for(int j=1;j<=x;j++)
                    {
                         if(i==1 || i==x)
                         {
                              int temp=(i-1)*x+j;
                              temp--;
                              if(str[temp]!='1')
                              {
                                  ok1=false;
                                  break;
                              }
                         }
                         else if(i>1 && i<x)
                         {
                              if(j==1 || j==x)
                              {
                                   int temp=(i-1)*x+j;
                                   temp--;
                                   if(str[temp]!='1')
                                 {
                                      ok1=false;
                                      break;
                                 }
                              }
                              else
                              {
                                   int temp=(i-1)*x+j;
                                   temp--;
                                   if(str[temp]!='0')
                                   {
                                       ok0=false;
                                       break;
                                   }
                              }
                         }
                    }
                    if(ok1==false || ok0==false)
                    {
                         break;
                    }
               }
               if(ok1==true && ok0==true)
               {
                    yes;
               }
               else
               {
                    no;
               }
          }
     } 
}
