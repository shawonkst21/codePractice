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
        int n;
        cin>>n;
        int ans1=-1,ans2=-1;
        if(n%4==0 || n%4==2)
        {
            ans1=n/4;
        }
        if(n%6==0 || n%6==2 || n%6==4)
        {
            if(n%6==0)
            {
                ans2=n/6;
            }
            else if(n%6==2)
            {
               ans2=n/6;
               ans2++;
            }
            else if(n%6==4)
            {
                ans2=n/6;
                ans2++;
            }
        }
        if(ans1>0 && ans2>0)
        {
            cout<<ans2<<' '<<ans1<<endl;
        }
        else if(ans1>0 && ans2<0)
        {
            cout<<ans1<<' '<<ans1<<endl;
        }
        else if(ans1<0 && ans2>0)
        {
            cout<<ans2<<' '<<ans2<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}
