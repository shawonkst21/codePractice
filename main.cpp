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
         vector<string>str;
         for(int i=0;i<n;i++)
         {
             string s;
             cin>>s;
             str.pb(s);
         }
          
         for(int i=n-1;i>=0;i--)
         {
            string temp=str[i];
            for(int j=0;j<4;j++)
            {
               if(temp[j]=='#')
               {
                    cout<<j+1<<" ";
                    break;
               }
            }
         }cout<<endl;
    }
}
