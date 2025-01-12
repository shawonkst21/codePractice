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
         int cnt=0,ex=INT_MAX,val=0;
         for(int i=0;i<n;i++)
         {
            cin>>b[i];
            if(a[i]<b[i])
            {
               cnt++;
               val+=abs(a[i]-b[i]);
            }
            else{
               ex=min(abs(a[i]-b[i]),ex);

            }
         }

         if(cnt<2)
         {
             if(cnt)
             {
                 if(val<=ex)
                 {
                    yes;
                 }
                 else{
                    no;
                 }
             }
             else{
               yes;
             }
         }
         else{
          no;
         }
     
     }
}



             
