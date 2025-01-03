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
       string s;
       cin>>s;
       int cnt1=0,cnt0=0;
       deque<int>q;
       for(auto i:s)
       {
          q.push_back(i);
          if(i=='0')
          {
               cnt0++;
          }
          else{
               cnt1++;
          }
       }
       if(cnt1!=cnt0)
       {
          cout<<"-1"<<endl;
       }
       else{
       vector<int>ans;
       int d=0;
     while(!q.empty())
     {
          if(q.front()==q.back())
          {
               if(q.front()=='0')
               {
                    q.push_back('0');
                    q.push_back('1');
                    ans.push_back(n-d);
               }
               else{
                    q.push_front('1');
                    q.push_front('0');
                    ans.push_back(0+d);
               }
               n+=2;
          }
          while(!q.empty() && q.front()!=q.back())
          {
                q.pop_back();
                q.pop_front();
                ++d;
          }
     }
        cout<<ans.size()<<endl;
        for(auto i:ans)
        {
          cout<<i<<" ";
        }cout<<endl;

     }
     
}
}



             
