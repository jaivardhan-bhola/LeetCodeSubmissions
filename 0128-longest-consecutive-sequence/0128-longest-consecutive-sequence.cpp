class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) return 0;
        int ans=1, c=1;
        sort(nums.begin(),nums.end());
        unordered_set <int> num (nums.begin(),nums.end());
        for(auto i: num){
            if(num.find(i-1)==num.end()) {
                c=1;
                while (num.find(i+c)!=num.end()) c++;
                ans = max(c, ans);
            }
        }
        return ans;
    }
};