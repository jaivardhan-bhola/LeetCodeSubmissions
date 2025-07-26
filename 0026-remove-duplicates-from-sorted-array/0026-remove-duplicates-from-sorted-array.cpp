class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        set<int> a;
        for(int i:nums) a.insert(i);
        int index=0;
       for(int i:a){
        nums[index] = i;
        index++;
       }
        return a.size();
    }
};