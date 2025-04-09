class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<bool> ans;
        int max = *max_element(candies.begin(), candies.end());
        for(int i : candies){
            if (i+extraCandies<max) ans.push_back(false);
            else ans.push_back(true);
        }
        return ans;
    }
};