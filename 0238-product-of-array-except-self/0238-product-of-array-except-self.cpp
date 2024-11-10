class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int> ans(nums.size(),1);
        int pl=1, pr=1;
        for(int i=0;i<nums.size();i++){
            ans[i] = pl;
            pl*=nums[i];
        }
        for(int i=nums.size()-1;i>-1;i--){
            ans[i]*=pr;
            pr*=nums[i];
        }
        return ans;
    }
};