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
int solve(vector<int>&b,int val)
{
    auto it=lower_bound(begin(b),end(b),val);
    return (it!=b.end())?*it:-1;
}
int32_t main() {
    faster();
    testCase{
        int n,m;
        cin>>n>>m;
        vi v(n),b(m);
        input(v);
        input(b);
        sort(begin(b),end(b));
        int prv=LLONG_MIN;
        string ans="YES";
        for(int i=0;i<n;i++)
        {
            int val=v[i]+prv;
            int x= solve(b,val);
            if(x!=-1)
            {
                if(v[i]<prv)
                {
                    v[i]=x-v[i];
                }
                else {
                    v[i]=min(v[i],x-v[i]);
                }
            }
            if(v[i]<prv)
            {
               ans="NO";
            }
            prv=v[i];
        }
        cout<<ans<<endl;
    }
}
