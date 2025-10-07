class Solution {
public:
int solve(vector<int>& nums, int goal) {
    int a = 0, sum = 0, ans = 0;
    for (int b = 0; b < nums.size(); b++) {
        sum += nums[b];
        while (a <= b && sum > goal) {
            sum -= nums[a];
            a++;
        }
        ans += (b - a + 1);
    }
    return ans;
}

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return (solve(nums, goal)-solve(nums, goal-1));
    }
};