class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int a, b, sum;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            a = i + 1;
            b = nums.size() - 1;
            while (a < b) {
                sum = nums[i] + nums[a] + nums[b];
                if (sum > 0)
                    b--;
                else if (sum < 0)
                    a++;
                else {
                    ans.push_back({nums[i], nums[a], nums[b]});
                    a++;
                    while (nums[a] == nums[a - 1] && a < b)
                        a++;
                }
            }
        }
        return ans;
    }
};