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
    testCase{
        int n,m;
        cin>>n>>m;
        vi a(n),b(m);
        input(a);
        input(b);
        sort(rbegin(b),rend(b));
        int mx1,mx2;
         mx1=b[0];
        if(m>1)
        {
             mx2=b[1];
        }
        else
        {
            mx2=mx1;
        }
         

        for(int i=0;i<n;i++)
        {
           int x=mx2-a[i];
           a[i]=min(a[i],x);
           if(i>0 && a[i]<a[i-1])
           {
             int y=mx1-a[i];
             a[i]=max(y,a[i]);
           }
        }
        if(is_sorted(rbegin(a),rend(a)))
        {
            yes;
        }
        else{
            no;
        }
    }
}
