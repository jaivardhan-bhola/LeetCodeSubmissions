class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxsum=-1;
        for(int i:nums){
            sum+=i;
            if(sum>maxsum) maxsum=sum;
            if(sum<0) sum=0;
        }
        return maxsum;
    }
};