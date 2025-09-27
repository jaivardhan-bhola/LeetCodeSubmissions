class Solution {
public:
    int bs(vector<int>& nums, int l, int h) {
        if (l == h) return nums[l]; 
        
        int mid = l + (h - l) / 2;

        if (mid % 2 == 1) mid--;

        if (nums[mid] == nums[mid + 1]) {
            return bs(nums, mid + 2, h);
        } else {
            return bs(nums, l, mid);
        }
    }

    int singleNonDuplicate(vector<int>& nums) {
        return bs(nums, 0, nums.size() - 1);
    }
};
