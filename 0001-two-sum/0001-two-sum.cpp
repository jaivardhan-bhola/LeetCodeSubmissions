class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> n(nums);
        sort(nums.begin(),nums.end());
        int a=0, b=nums.size()-1, sum=nums[a]+nums[b];
        while (sum!=target){
            if (sum<target) a++;
            else if (sum>target) b--;
            sum=nums[a]+nums[b];
        }
        vector<int> c;
        c.push_back(find(n.begin(), n.end(), nums[a])-n.begin());
        if (n[find(n.begin(), n.end(), nums[a])-n.begin()] == nums[b]) n[find(n.begin(), n.end(), nums[a])-n.begin()]--;
        c.push_back(find(n.begin(), n.end(), nums[b])-n.begin());
        return c;
    }
};