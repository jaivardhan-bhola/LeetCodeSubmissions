class Solution {
public:
    bool calc(vector<int>& nums, int threshold, int s){
        for(int i:nums){
            threshold-=(s+i-1)/s;
            if (threshold<0) return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1, h=*max_element(nums.begin(),nums.end()), mid;
        while(l<h){
            mid = l+(h-l)/2;
            if(calc(nums,threshold,mid)) h=mid;
            else l=mid+1;
        }
        return l;
    }
};