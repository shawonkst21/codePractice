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
     string s1,s2;
     cin>>s1>>s2;
     transform(s1.begin(),s1.end(),s1.begin(),::toupper);
       transform(s2.begin(),s2.end(),s2.begin(),::toupper);
       if(s1==s2)
       {
          cout<<"0"<<endl;
       }
       else{
          for(int i=0;i<s1.size();i++)
          {
               if(s1[i]==s2[i]){
                    continue;
               }
               else if(s1[i]<s2[i]){
                    cout<<"-1"<<endl;
                    break;
               }
               else{
                    cout<<"1"<<endl;
                    break;
               }
          }
       }


             
}