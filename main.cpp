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

int32_t main() {
    faster();
    int n,q;
    cin>>n>>q;
    vi v(n);
    input(v);
    int sum=accumulate(begin(v),end(v),0ll);
    map<int,int>m;
    int up=-1;
    while(q--){
        int x;
        cin>>x;
        if(x==1)
        {
            int i,val;
            cin>>i>>val;
                        i--;

            if(up==-1)
            {
               if(val>=v[i])
               {
                sum+=(val-v[i]);
               }
               else{
                 sum-=(v[i]-val);
               }
               v[i]=val;
               cout<<sum<<endl;
            }
            else{
                int temp;
               if(m[i]==0)
               {
                  temp=up;
               }
               else{
                temp=m[i];
               }
               if(val>=temp)
               {
                 sum+=val-temp;
               }
               else{
                sum-=(temp-val);
               }
               cout<<sum<<endl;
               m[i]=val;
            }
        }
        else{
            int val;
            cin>>val;
            cout<<n*val<<endl;
            sum=n*val;
            m.clear();
            up=val;

        }
    }
}
