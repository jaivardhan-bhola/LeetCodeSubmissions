class Solution {
public:
    int maxArea(vector<int>& height) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a=0, b=height.size()-1, area,ans=0;
        while(a<b){
            area=min(height[a],height[b])*(b-a);
            ans=max(ans,area);
            if (height[a]<height[b]) a++;
            else b--;
        }
        return ans;
    }
};