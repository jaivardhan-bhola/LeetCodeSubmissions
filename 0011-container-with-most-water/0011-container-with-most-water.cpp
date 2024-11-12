class Solution {
public:
    int maxArea(vector<int>& height) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a=0, b=height.size()-1,ans=0;
        while(a<b){
            ans=max(ans,min(height[a],height[b])*(b-a));
            if (height[a]<height[b]) a++;
            else b--;
        }
        return ans;
    }
};