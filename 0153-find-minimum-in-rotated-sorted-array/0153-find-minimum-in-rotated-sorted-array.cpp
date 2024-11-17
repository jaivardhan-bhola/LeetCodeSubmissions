class Solution {
public:
    int findMin(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int l=0, r=nums.size()-1, mid=0;
        while(l<r){
            mid = l+ (r-l)/2;
            if (nums[mid]<=nums[r]) r=mid; else l=mid+1;
        }
        return nums[l];
    }
};