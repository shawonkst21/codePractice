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
        vi v(n);
        for(auto &i:v)
        {
          cin>>i;
        }
        bool ok=true;
        for(int i=0;i<n-1;i++)
        {
            int x=abs(v[i]-v[i+1]);
            if(x==5 || x==7)
            {
               continue;
            }
            else
            {
               ok=false;
               break;
            }
        }
        if(ok)
        {
            yes;
        }
        else
        {
          no;
        }
    }
}
