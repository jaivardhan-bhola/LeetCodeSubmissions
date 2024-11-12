class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=prices[0],maxp;
        for(auto i:prices) {
            if (a>i) a=i; maxp=max(maxp,i-a);
        }
        return maxp;
    }
};