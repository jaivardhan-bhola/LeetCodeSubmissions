class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) return 0;
        int ans=1, c=1, x=-1;
        unordered_set <int> num (nums.begin(),nums.end());
        for(auto i: num){
            if(num.find(i-1)==num.end()) {
                c=1;
                x=i;
                while (num.find(x+1)!=num.end()) {c++; x++;}
                ans = max(c, ans);
            }
        }
        return ans;
    }
};