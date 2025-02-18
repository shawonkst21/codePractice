#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define pb push_back
#define MOD 998244353

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define input(a) for (auto &x : a) cin >> x
#define output(a) { for (auto &x : a) cout << x << ' '; cout << endl; }
#define testCase int t; cin >> t; while (t--)

int power(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> pos_1, pos_2, pos_3;

   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) pos_1.push_back(i);
        else if (a[i] == 2) pos_2.push_back(i);
        else pos_3.push_back(i);
    }

    if (pos_1.empty() || pos_3.empty()) {
        cout << "0\n";
        return;
    }

    int total_count = 0;

    
    for (int i : pos_1) {
        for (int j : pos_3) {
            if (i < j) {
             
                int num_twos = upper_bound(pos_2.begin(), pos_2.end(), j - 1) -
                               lower_bound(pos_2.begin(), pos_2.end(), i + 1);

            
                if (num_twos == 0) continue;

                total_count = (total_count + (power(2, num_twos, MOD) - 1 + MOD) % MOD) % MOD;
            }
        }
    }

    cout << total_count << "\n";
}

int32_t main() {
    faster();
    testCase {
        solve();
    }
}
