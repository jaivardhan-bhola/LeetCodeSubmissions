class Solution {
public:
    int calc(vector<int>& weights, int days, int s){
        int a=0;
        for(int i: weights){
            a+=i;
            if(a>s){
                days--;
                a=0;
                a+=i;
            }
        }
        if(days>0) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end()),h= accumulate(weights.begin(),weights.end(),0), mid;
        while(l<h){
            mid=l+(h-l)/2;
            if (calc(weights,days,mid)) h=mid;
            else l=mid+1;
        }
        return l;
    }
};