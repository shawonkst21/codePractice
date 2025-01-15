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
int knapsackValueBased(int n,int w,vector<int>&a,vector<int>&b)
{
     int max_v = 100000;
     vector<int> dp(max_v + 1, LLONG_MAX);
     dp[0]=0;

     for (int i = 0; i < n; i++) {
        int w = a[i], v = b[i];
        for (int j = max_v; j >= v; j--) {
            if (dp[j - v] != LLONG_MAX) {
                dp[j] = min(dp[j], dp[j - v] + w);
            }
        }
    }
      int result = 0;
      for (int v = 0; v <= max_v; v++) {
        if (dp[v] <= w) {
            result = v;
        }
    }
    return result;

}
int32_t main() {
    faster();
      int n, w;
       cin >> n >> w;
       vi a(n), b(n);
       for (int i = 0; i < n; i++) {
           cin >> a[i] >> b[i];
       }
       int maxValue = knapsackValueBased(n, w, a, b);
       cout << maxValue << endl;
}
