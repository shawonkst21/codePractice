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
// priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define input(a)      \
    for (auto &x : a) \
        cin >> x

#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)

int32_t main() {
    faster();
    testCase {
        int n;
        cin >> n;
        vi v(n);
        input(v);

        // Create a vector of pairs to handle duplicates and maintain indices
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({v[i], i});
        }

        // Sort by value
        sort(arr.begin(), arr.end());

        // Calculate prefix sum
        vector<int> prefix(n);
        prefix[0] = arr[0].first;
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + arr[i].first;
        }

        // Result array
        vector<int> ans(n);

        // Initialize for the largest element
        ans[arr[n - 1].second] = n - 1;

        // Process from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (prefix[i] >= arr[i + 1].first) {
                ans[arr[i].second] = ans[arr[i + 1].second];
            } else {
                ans[arr[i].second] = i;
            }
        }

        // Output the result
        for (auto i : ans) {
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}
