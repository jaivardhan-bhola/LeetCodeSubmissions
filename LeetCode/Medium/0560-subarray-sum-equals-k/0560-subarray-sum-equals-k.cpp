class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> hash;
        hash[0]=1;
        int pre=0, c=0, a;
        for(int x: nums){
            pre+=x;
            a=pre-k;
            c+=hash[a];
            hash[pre]++;
        }
        return c;
    }
};