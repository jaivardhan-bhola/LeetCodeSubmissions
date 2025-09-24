class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=prices[0],maxp=INT_MIN;
        for(auto i:prices) {
            if (a>i) a=i; maxp=max(maxp,i-a);
        }
        return maxp;
    }
};