class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int c1=0, c2=0, e1=INT_MIN,e2=INT_MIN;
        for(int i:nums){
            if (c1==0&&i!=e2) {c1=1;e1=i;}
            else if (c2==0&&i!=e1) {c2=1;e2=i;}
            else if (e1==i) c1++;
            else if (e2==i) c2++;
            else{
                c1--;c2--;
            }
        }
        c1=0;c2=0;
        for(int i:nums){
            if (i==e1) c1++;
            if (i==e2) c2++;
        }
        if (c1>=nums.size()/3+1) ans.push_back(e1);
        if (c2>=nums.size()/3+1) ans.push_back(e2);
        return ans;
    }
};