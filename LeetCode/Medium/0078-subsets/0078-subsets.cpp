class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        for(int  i=0; i<(1<<nums.size());i++){
            a.clear();
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)) a.push_back(nums[j]);
            }
            ans.push_back(a);
        }
        return ans;
    }
};