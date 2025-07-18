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
      int n,k;
      cin>>n>>k;
      vi v(n);
      input(v);
      vi count(n);
      int temp=0;
      for(int i=n-1;i>=0;i--)
      {
          if(v[i]==0)
          {
            temp++;
            count[i]=temp;
          }
          else{
            temp=0;
          }
      }
      int ans=0;
      int i=0;
      while(i<n)
      {
          if(count[i]==0)
          {
            i++;
          }
          else{
              if(count[i]>=k)
              {
                  ans++;
                  i=i+k+1;
              }
              else{
                i++;
              }
          }
      }
      cout<<ans<<endl;

    }
}
