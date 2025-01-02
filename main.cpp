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
       string s1,s2;
       cin>>s1>>s2;
       bool first=true,second=true;
       if(n==1 && m==1 && (s1!=s2))
       {
          yes;
       }
       else{
          for(int i=0;i<m-1;i++)
          {
               if(s2[i]==s2[i+1])
               {
                    second=false;
                    break;
               }
          }
          for(int i=0;i<n-1;i++)
          {
               if(s1[i]==s1[i+1])
               {
                    first=false;
                    break;
               }
          }
          if(first==true)
          {
               yes;
          }
          else if(first==false && second==false)
          {
               no;
          }
          else{
               bool ans=true;
               for(int i=0;i<n-1;i++)
               {
                    if(s1[i]==s1[i+1])
                    {
                         if(s1[i]!=s2[0] && s1[i+1]!=s2[m-1])
                         {
                              continue;
                         }
                         else{
                              ans=false;
                              break;
                         }
                    }
               }
               if(ans)
               {
                    yes;
               }
               else{
                    no;
               }
          }

       }
     }
     
}


             
