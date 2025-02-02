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

// Function to find the MEX of an array
int findMEX(vector<int>& arr) {
    unordered_set<int> st(arr.begin(), arr.end());
    int mex = 0;
    while (st.count(mex)) mex++;
    return mex;
}

// Function to determine the maximum MEX
int getMaxMEX(int n, vector<vector<int>>& arrivals) {
    vector<int> queue_state(n, 0);  // Tracks the final number of people in each queue
    
    for (int j = 0; j < n; j++) {
        int best_choice = 0;
        int max_value = -1;
        
        // Add arrivals to all queues
        for (int i = 0; i < n; i++) {
            queue_state[i] += arrivals[i][j];
        }
        
        // Choose the best queue to serve (one with the highest value)
        for (int i = 0; i < n; i++) {
            if (queue_state[i] > max_value) {
                max_value = queue_state[i];
                best_choice = i;
            }
        }
        
        // Serve the chosen queue (empty it)
        queue_state[best_choice] = 0;
    }
    
    // Calculate the MEX of the final queue state
    return findMEX(queue_state);
}

int32_t main() {
    faster();
    testCase {
        int n;
        cin >> n;
        vector<vector<int>> arrivals(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arrivals[i][j];
            }
        }

        cout << getMaxMEX(n, arrivals) << endl;
    }
}
