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
vector<int>f{0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3};
int32_t main() {
    faster();
    testCase{
        int n;
        cin>>n; 
        if(n<15)
        {
            cout<<f[n%15]<<endl;
        }
        else if(n%15==5)
        {
            cout<<n/15+1<<endl;
        }
        else if(n%15==8)
        {
            cout<<n/15+2<<endl;
        }
        else{
            cout<<n/15+f[n%15]<<endl;
        }
    }
}
