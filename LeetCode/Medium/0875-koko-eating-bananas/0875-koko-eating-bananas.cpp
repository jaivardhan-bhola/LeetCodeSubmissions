class Solution {
public:
    bool calc(vector<int>& piles, int h, int s){
        long long sum=0;
        for (int i:piles){
            sum+=(i+s-1)/s;
        }
        if (sum<=h) return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=*max_element(piles.begin(),piles.end()), mid;
        while(l<=r){
            mid = l+(r-l)/2;
            if (calc(piles,h,mid)) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};