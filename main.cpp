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

        if(n%2==0)
        {
           cout<<n/2<<' '<<n/2<<endl;
        }
        else
        {
           int x=n/2;
           int y=n-x;
           if(n%20==19)
           {
               string s=to_string(n);
               string a=s,b=s;
               int val1=0,val2=0;
               for(int i=0;i<s.size();i++)
               {
                    int v1=(s[i]-'0')/2;
                    int v2=(s[i]-'0')-v1;
                    if(v1==v2)
                    {
                         a[i]='0'+v1;
                         b[i]='0'+v2;
                    }
                    if(v1>v2) swap(v1,v2);
                    if(val1>=val2)
                    {
                         b[i]='0'+v2;
                         a[i]='0'+v1;
                         val1+=(a[i]-'0');
                         val2+=(b[i]-'0');
                    }
                    else
                    {
                          b[i]='0'+v1;
                         a[i]='0'+v2;
                         val1+=(a[i]-'0');
                         val2+=(b[i]-'0');
                    }
               }
               reverse(a.begin(),a.end());
                reverse(b.begin(),b.end());
                while(a.back()=='0')a.pop_back();

                while(b.back()=='0')b.pop_back();

                reverse(a.begin(),a.end());
                reverse(b.begin(),b.end());
                cout<<a<<' '<<b<<endl;

           }
           else
           {
               cout<<x<<' '<<y<<endl;
           }
        }
     }
             
}