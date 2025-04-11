class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int ans = 0;
        for (int i = low; i <= high; i++) {
            if (i < 100 && i % 11 == 0) {
                ans++;
            } else if (i>=1000 && i < 10000) {
                int l = i / 1000 + (i % 1000) / 100;
                int r = (i% 100) / 10 + i % 10;
                if (l == r) {
                    ans++;
                }
            }
        }
        return ans;
    }
};