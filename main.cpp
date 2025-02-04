#include <bits/stdc++.h>
using namespace std;

#define int long long
void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int32_t main() {
    faster();
    
    int n, x;
    cin >> n >> x;
    vector<int> h(n), s(n), k(n);
    
    for (int i = 0; i < n; i++) cin >> h[i];  // Prices of books
    for (int i = 0; i < n; i++) cin >> s[i];  // Pages of books
    for (int i = 0; i < n; i++) cin >> k[i];  // Number of copies available

    vector<int> dp(x + 1, 0);

    // Process each book
    for (int i = 0; i < n; i++) {
        int price = h[i], pages = s[i], copies = k[i];

        // Binary Decomposition Trick
        for (int j = 1; copies > 0; j *= 2) {
            int taken = min(j, copies);  // Ensure we don't exceed available copies
            int cost = taken * price;
            int value = taken * pages;
            copies -= taken;

            // 0/1 Knapsack DP (Processing in reverse)
            for (int w = x; w >= cost; w--) {
                dp[w] = max(dp[w], dp[w - cost] + value);
            }
        }
    }

    cout << dp[x] << endl;
}
