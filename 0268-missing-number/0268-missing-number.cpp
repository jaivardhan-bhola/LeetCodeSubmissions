class Solution {
public:
    int missingNumber(vector<int>& nums) {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        int sum = nums.size()*(nums.size()+1)/2;
        for(int i:nums){
            sum-=i;
        }
        return sum;
    }
};