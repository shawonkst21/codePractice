#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define pb push_back
const int N = 1e5 + 10;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
// int dx2[]={0,0,-1,1,1,1,-1,-1};
// int dy2[]={-1,1,0,0,1,-1,1,-1};
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mii map<int, int>
#define setBits(a) (int)__builtin_popcountll(a)
#define mod 1000000007
//priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define input(a)      \
    for (auto &x : a) \
        cin >> x
#define output(a)             \
    {                         \
        for (auto &x : a)     \
            cout << x << ' '; \
        cout << endl;         \
    }
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)

int extended_gcd(int m,int n,int &p,int &q)
{
    if(!n)
    {
        p=1;
        q=0;
        return m;
    }
    int g=extended_gcd(n,m%n,p,q);
    int t=p;
    p=q;
    q=t-(m/n)*q;
    return g;
}

int32_t main() {
    faster();
      int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c,p,x,y,ans=0;
        cin>>a>>b>>c>>p;
        int g=extended_gcd(a,b,x,y);
        int da=b/g,db=a/g;
        
        for(int k=0;;k++)
        {
            int k0=p-k*c;
            if(k0<0) break;
            if(k0%g!=0) continue;
            
            int X=x*k0/g,Y=y*k0/g;
        
            X=(X%da + da)%da;
            Y=(k0 - X*a)/b;
            
            if(Y>=0) ans++;
            ans+=Y/db;
        }
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }

}
