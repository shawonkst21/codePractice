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
        int n,x;
        cin>>n>>x;
        int cnt=setBits(x);
        if(n<=cnt)
        {
            cout<<x<<endl;
        }
        else{
            if((n-cnt)%2==0)
            {
                cout<<x+(n-cnt)<<endl;
            }
            else{
                if(x>1)
                {
                    cout<<x+n-cnt+1<<endl;
                }
                else if(x==1)
                {
                    cout<<n+3<<endl;
                }
                else{
                    if(n==1)
                    {
                        cout<<"-1"<<endl;
                    }
                    else{
                        cout<<n+3<<endl;
                    }
                }
            }
        }
        
        
    }
}
