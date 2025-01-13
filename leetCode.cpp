class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        map<int, int> m;
        for (auto i : s) {
            m[i - 'a']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (m[i] >= 3) {
                int x = m[i] % 2;
                if (x == 0) {
                    ans += 2;
                } else {
                    ans += 1;
                }
            } else {
                ans += m[i];
            }
        }
        return ans;
    }
};