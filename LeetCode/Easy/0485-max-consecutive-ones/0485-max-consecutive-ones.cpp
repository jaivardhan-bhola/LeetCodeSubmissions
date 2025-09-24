class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        int count=0,maxcount=0;
        for(int x:nums){
            if (x==1) count++;
            else count=0;
            maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};