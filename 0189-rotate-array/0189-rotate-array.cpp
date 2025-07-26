class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};