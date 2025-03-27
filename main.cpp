#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

const int N = 1e6 + 10;
vector<bool> is_prime(N, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

// Count numbers ≤ n that are divisible by at least one of the given primes
int count_divisible_by_any(const vi &primes, int n) {
    int k = primes.size();
    int count = 0;

    for (int i = 1; i < (1 << k); i++) { // Iterate over all subsets of primes
        int product = 1, bits = __builtin_popcount(i);

        for (int j = 0; j < k; j++) {
            if (i & (1 << j)) {  // If j-th bit is set, include primes[j]
                if (product > n / primes[j]) {  // Prevent integer overflow
                    product = n + 1;
                    break;
                }
                product *= primes[j];
            }
        }

        if (product > n) continue;

        int divisible_count = n / product;
        if (bits % 2) count += divisible_count;  // Add if odd subset size
        else count -= divisible_count;  // Subtract if even subset size
    }

    return count;
}

int32_t main() {
    faster();
    sieve();

    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int n, k;
        cin >> n >> k;
        vi primes(k);
        for (auto &x : primes) cin >> x;

        int total_composites = 0;
        for (int i = 2; i <= n; i++) {
            if (!is_prime[i]) total_composites++;  // Count composite numbers
        }

        int divisible_count = count_divisible_by_any(primes, n);
        int result = total_composites - divisible_count;

        cout << "Case " << tc << ": " << result << endl;
    }
}
