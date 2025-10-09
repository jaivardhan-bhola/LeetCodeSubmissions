class Solution {
public:
    int jump(vector<int>& nums) {
       int r=0, ans=0, idx=0;
       for(int i =0; i<nums.size()-1;i++){
        idx=max(idx,i+nums[i]);
        if (i==r){ans++; r=idx;}

       }
       return ans; 
    }
};