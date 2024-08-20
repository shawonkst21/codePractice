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
        
        vi even,od;
        for(int i=0;i<n;i++)
        {
           if(v[i]%2==1)
           {
               od.pb(i+1);
           }
           else
           {
               even.pb(i+1);
           }
        }
        if(od.size()>=3)
        {
           yes;
           cout<<od[0]<<' '<<od[1]<<' '<<od[2]<<endl;
        }
        else if(even.size()>=2 && od.size()!=0)
        {
          yes;
          cout<<even[0]<<' '<<even[1]<<' '<<od[0]<<endl;
        }
        else
        {
          no;
        }
        
     }
             
}