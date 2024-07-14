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
        vi v(n);
        for(auto &i:v)
        {
           cin>>i;
        }
        int andsum=v[0];
        for(int i=1;i<n;i++)
        {
           andsum&=v[i];
        }
        if(andsum>0)
        {
          cout<<"1"<<endl;
        }
        else
        {
          int sum=v[0];
          int cnt=0;

           for(int i=1;i<n;i++)
           {
               if(sum==0)
               {
                    cnt++;
                    sum=v[i];
               }
               else
               {
                     sum&=v[i];
               }
           }
           if(sum==0)
           {
               cnt++;
           }
            cout<<cnt<<endl;
        }

     }
             
}