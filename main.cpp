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
        stack<int>s;
        for(int i=0;i<n;i++){
          s.push(i*i);
        }
        int sum=0;
        int cnt=0;
        int c=0;
        vector<int>ans(n,-1);
        for(int i=n-1;i>=0;)
        {
          if(ans[i]==-1)
          {
              if(s.top()-i>i)
              {
                s.pop();
              }
              else{
                int x=s.top()-i;
                ans[x]=i;
                ans[i]=x;
                i--;
              }
          }
          else{
            i--;
          }
        }
        output(ans);
    }
}
