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
        int n,c,d;
        cin>>n>>c>>d;
        vi v(n*n);
        for(auto &i:v)
        {
          cin>>i;
        }
        sort(begin(v),end(v));
        int x=v[0];
        int y=x;
        vi temp(n*n);
        temp[0]=x;
        for(int i=1;i<n*n;i++)
        {
              if(i%n==0)
              {
                x+=c;
                y=x;
                temp[i]=y;
              }
              else{
               y+=d;
               temp[i]=y;
              }

        }
        sort(begin(temp),end(temp));
        if(temp==v)
        {
          yes;
        }
        else{
          no;
        }
     }
}



             
