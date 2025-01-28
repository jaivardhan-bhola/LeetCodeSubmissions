class Solution {
public:
            bool isPossible(int n, vector<int>&a, int sum) {
            vector<vector<bool>> t(n + 1, vector<bool>(sum + 1, false));
            for (int i = 0; i < n + 1; i++)
                for (int j = 0; j < sum + 1; j++) {
                    if (i == 0)
                        t[i][j] = false;
                    if (j == 0)
                        t[i][j] = true;
                }
            for (int i = 1; i < n + 1; i++)
                for (int j = 1; j < sum + 1; j++) {
                    if (a[i - 1] <= j)
                        t[i][j] = t[i - 1][j - a[i - 1]] || t[i - 1][j];
                    else
                        t[i][j] = t[i - 1][j];
                }
            return t[n][sum];
        }

    bool canPartition(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n = nums.size();
        int sum =0;
        for(auto i:nums) sum+=i;
        if (sum%2==1) return false;
        bool ans = isPossible(n, nums, sum/2);
        return ans;
    }
    };