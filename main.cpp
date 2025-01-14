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
#define input(a)      \
    for (auto &x : a) \
    cin >> x

#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)

int32_t main()
{
     faster();
     testCase
     {
        int n,k;
        cin>>n>>k;
        vi a(n),b(n);
        input(a);
        input(b);
        int sum=0;
        int res=0;
        int mx=0;
        for(int i=0;i<min(n,k);i++)
        {
           sum+=a[i];
           mx=max(mx,b[i]);
           res=max(res,sum+(mx*(k-i-1)));
        }
        cout<<res<<endl;

     }
}



             
