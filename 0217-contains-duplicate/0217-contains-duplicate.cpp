class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);
        if (s.size() == nums.size())
            return false;
        return true;
    }
};