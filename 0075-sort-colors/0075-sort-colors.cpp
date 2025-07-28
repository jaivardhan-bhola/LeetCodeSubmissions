class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> a = {{0, 0}, {1, 0}, {2, 0}};
        for(int i:nums) a[i]++;
        int x = 0, y=0;
        for(int i=0;i<3;i++){
            x=a[i];
            for(int j=0;j<x;j++){
                nums[y]=i;
                y++;
            }
        }
    }
};