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
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mii map<int, int>
#define setBits(a) (int)__builtin_popcountll(a)
#define mod 1000000007

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
    testCase {
        int n, x, k;
        cin >> n >> x >> k;
        vi v(n);
        string s;
        cin >> s;

        for (int i = 0; i < n; i++) {
            v[i] = (s[i] == 'L') ? -1 : 1;
        }

        int cnt = 0;
        bool ok = false;

        if (x == 0) { 
            ok = true;
        }

        for (int i = 0; i < n; i++) {
            x += v[i];
           // cout<<x<<endl;
            cnt++;
            if (x == 0) {
                ok = true;
                break;
            }
        }
         
        int ans=0;
        if(ok)
        {
         ans++;
        if (k > n) {
            vector<int> prefix(n);
            prefix[0] = v[0];
            for (int i = 1; i < n; i++) {
                prefix[i] = prefix[i - 1] + v[i];
            }

            int temp1 = -1;
            for (int i = 0; i < n; i++) {
                if (prefix[i] == 0) {
                    temp1 = i + 1;
                    break;
                }
            }

            if (temp1 != -1  && k >= cnt) { 
                k -= cnt;
                ans += (k / temp1);
            }
        }
    }
      cout << ans << endl;
    }
}
