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
        vi rem(3,0);
        for(auto i:v)
        {
            rem[i%3]++;
        }
        int res=0;
        while(*min_element(rem.begin(),rem.end())!=n/3)
        {
          for(int i=0;i<3;i++)
          {
               if(rem[i]>n/3)
               {
                    res++;
                    rem[i]--;
                    rem[(i+1)%3]++;
               }
          }
        }
        cout<<res<<endl;
     }
}



             
