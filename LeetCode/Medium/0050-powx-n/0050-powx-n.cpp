class Solution {
private:
    double pow(double x, long long n){
        double ans = 1;

    while (n > 0) {

        int last_bit = (n & 1);
        if (last_bit) 
            ans = ans * x;

        x = x * x;
        n = n >> 1;
    }
    return ans;
    };

public:
    double myPow(double x, int n) {
        long long N=n;
        if (N<0){
            x=1/x;
            N=-N;
        }
        return pow(x,N);
    }
};