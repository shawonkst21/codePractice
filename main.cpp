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
// priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;

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

bool checkParity(int a,int b)
{
    return (a%2==b&2);
}
int32_t main() {
    faster();
    testCase{
      int n;
      cin>>n;
      string s,r;
      cin>>s>>r;
      int cnt=count(s.begin(),s.end(),'0');
      int cnt1=n-cnt;
      string ans="YES";
      for(int i=0;i<n-1;i++)
      {
        if(cnt==0 || cnt1==0)
        {
            ans="NO";
            break;
        }
        if(r[i]=='1')cnt--;
        else{
            cnt1--;
        }
      }
      cout<<ans<<endl;
    }
}