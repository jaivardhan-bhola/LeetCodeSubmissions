class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int i:nums){
            if (a==0) b = i;
            if (b==i) a++;
            else a--;
        }
        a=0;
        for(int i:nums) if (i==b) a++;
        if (a>nums.size()/2) return b;
        return -1;
    }
};