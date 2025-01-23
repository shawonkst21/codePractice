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
// priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;

void faster()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

#define input(a)    \
  for (auto &x : a) \
  cin >> x
#define output(a)       \
  {                     \
    for (auto &x : a)   \
      cout << x << ' '; \
    cout << endl;       \
  }
#define testCase \
  int t;         \
  cin >> t;      \
  while (t--)

int32_t main()
{
  faster();
  int n;
  cin >> n;
  vi a(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  vector<vi> dp(n + 2, vi(n + 2, 0));
  for (int i = n; i >= 1; i--)
  {
    for (int j = i; j <= n; j++)
    {
      if (i == j)
      {
        dp[i][j] = 1;
      }
      else
      {
        dp[i][j] = 1 + dp[i + 1][j];
        if (a[i] == a[i + 1])
        {
          dp[i][j] = min(dp[i][j], 1 + dp[i + 2][j]);
        }

        for (int k = i + 2; k <= j; k++)
        {
          if (a[i] == a[k])
          {
            dp[i][j] = min(dp[i][j], dp[i + 1][k - 1] + dp[k + 1][j]);
          }
        }
      }
    }
  }
  cout << dp[1][n] << endl;
}
