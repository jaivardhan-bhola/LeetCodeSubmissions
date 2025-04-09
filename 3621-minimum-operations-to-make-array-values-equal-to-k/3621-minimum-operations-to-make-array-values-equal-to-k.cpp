class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int count = 0;
        sort(nums.begin(),nums.end());
        if (nums[0]<k) return -1;
        if (nums[0]>k) count++;
        for (int i=1;i<nums.size();i++){
            if (nums[i] < k) return -1;
            if (nums[i]!=nums[i-1]) count++;
        }
        return count;
    }
};