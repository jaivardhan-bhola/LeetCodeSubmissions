class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        int i=-1;
        for(int j=0;j<nums.size();j++)
            if (nums[j]==0){
                i=j;
                break;
            }
        if (i<0) return; 
        for(int j=i+1;j<nums.size();j++){
            if (nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};