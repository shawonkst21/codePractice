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
        string str;
        cin>>str;
        set<char>s1,s2;
        vector<int>dis1(n,0),dis2(n,0);
        for(int i=0;i<n;i++)
        {
           s1.insert(str[i]);
           dis1[i]=s1.size();
        }
        for(int i=n-1;i>=0;i--) 
        {
           s2.insert(str[i]);
           dis2[i]=s2.size();
        }
          int cnt=0;
        for(int i=0;i<n-1;i++)
        {
                cnt=max(cnt,dis1[i]+dis2[i+1]);
        }
        cout<<cnt<<endl;
     }
}



             
