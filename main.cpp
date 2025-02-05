#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
#define N 100010

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int n, q;
int a[N];

struct SegmentTree {
    #define lc (node << 1)
    #define rc ((node << 1) + 1)

    int t[4 * N];

    SegmentTree() {
        memset(t, 0, sizeof(t));
    }

    // Function to determine the level operation (AND or OR)
    bool isAnd(int depth) {
        return (depth % 2 == (n % 2 == 0 ? 1 : 0));  // Ensuring root follows correct operation
    }

    // Combine function based on the depth (AND or OR operation)
    int combine(int left, int right, int depth) {
        return isAnd(depth) ? (left & right) : (left | right);
    }

    // Build the segment tree
    void build(int node, int start, int end, int depth) {
        if (start == end) {
            t[node] = a[start];
        } else {
            int mid = (start + end) >> 1;
            build(lc, start, mid, depth + 1);
            build(rc, mid + 1, end, depth + 1);
            t[node] = combine(t[lc], t[rc], depth);
        }
    }

    // Point update in segment tree
    void update(int node, int start, int end, int idx, int value, int depth) {
        if (start == end) {
            t[node] = value;
        } else {
            int mid = (start + end) >> 1;
            if (idx <= mid)
                update(lc, start, mid, idx, value, depth + 1);
            else
                update(rc, mid + 1, end, idx, value, depth + 1);
            t[node] = combine(t[lc], t[rc], depth);
        }
    }

    // Query root to get the current beauty value
    int getBeauty() {
        return t[1];  // The root node contains the final computed value
    }

} segTree;

int32_t main() {
    faster();
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];

        // Build segment tree
        segTree.build(1, 1, n, 0);

        cin >> q;
        while (q--) {
            int p, x;
            cin >> p >> x;
            segTree.update(1, 1, n, p, x, 0);
            cout << segTree.getBeauty() << endl;
        }
    }
    return 0;
}
