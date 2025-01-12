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
         int n;
         cin>>n;
         vi a(n),b(n);
         for(auto &i:a)
         {
            cin>>i;
         }
         for(auto &i:b)
         {
            cin>>i;
         }
         if(b[0]<a[0])
         {
            no;
         }
         else{
               int x=b[0]-a[0];
               int cnt=1;
               for(int i=1;i<n;i++)
               {
                      a[i]-=x;
                      if(a[i]<0)
                      {
                         break;    
                      }
                      if(a[i]>b[i])
                      {
                         break;
                      }
                      else{
                        int y=b[i]-a[i];
                              x+=y;
                              cnt++;
                        }
               }
               if(cnt==n)
               {
                    yes;
               }
               else{
                    no;
               }

         }
     }
}



             
