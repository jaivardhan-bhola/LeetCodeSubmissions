class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        bool sign=true;
        if(dividend>=0&& divisor<0) sign=false;
        if(dividend<0&& divisor>0) sign=false;
        long n = labs((long)dividend);
        long d = labs((long)divisor);

        long ans=0;
        int a=0;
        while(n>=d){
        a=0;
        while(n>=d<<(a+1)) a++;
        ans+=1<<a;
        n-=d<<a;
        }
        if (ans==(1<<31)&&sign) return INT_MAX;
        if (ans==(1<<31)&&!sign) return INT_MIN;
        return (sign)? ans:-ans;
    }
};