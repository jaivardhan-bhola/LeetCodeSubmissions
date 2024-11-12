class Solution {
public:
    int trap(vector<int>& height) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a=0, b=height.size()-1, amax=height[a], bmax=height[b],ans=0;
        while(a<b){
            if(amax<bmax){
                a++;
                amax=max(amax,height[a]);
                ans+=amax-height[a];
            }
            else{
                b--;
                bmax=max(bmax,height[b]);
                ans+=bmax-height[b];
            }
        }
        return ans;
    }
};