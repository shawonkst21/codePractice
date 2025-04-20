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
int solve(int b,int p,int m)
{
    if(p==0)
    {
        return 1;
    }
    else if(p%2==1)
    {
        int a=b%m;
        int x=(solve(b,p-1,m))%m;
        return (a*x)%m;
    }
    else{
        int a=(solve(b,p/2,m))%m;
        return (a*a)%m;
    }
}
int32_t main() {
    faster();
    int a,b,m;
    cin>>a>>b>>m;
    int x=solve(b,m-2,m);
    int ans=(a*x)%m;
    cout<<ans<<endl;
}
