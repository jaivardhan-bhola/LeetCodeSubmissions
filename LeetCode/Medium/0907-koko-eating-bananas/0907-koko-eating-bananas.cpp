class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int> a;
        long long k =0;
        long long maxb = *max_element(piles.begin(), piles.end());
        long long l=1, r = maxb, mid=0;
        while(l<r){
            k=0;
            mid = (l+(r-l)/2);
            for(auto i:piles) {
                k+= (i+mid-1)/mid;
            }
            if (k<=h) r=mid;
            else l=mid+1;
        }
        return (int)l;
    }
};