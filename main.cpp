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
       for(auto i:s)
       {
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
       int i=0;
       int j=n-1;
       vector<int>ans;
       bool f=false;
       int d=0;
        while(i<j)
        {
           if(s[i]==s[j] && s[i]=='0')
           {
               s+="0";
               ans.push_back(j+1);
               i++;
               j++;
           }
           else if(s[i]==s[j] && s[i]=='1'){
               if(i==0 && f==false)
               {
                   ans.push_back(0);
                   s="1"+s;
                   j--;
                   i=0;
                   d++;
                   f=true;
               }
               else{
                    ans.push_back(d);
                    d++;
                    j--;
                    i=0;
               }

           }
           else{
               i++;
               j--;
               d++;
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



             
