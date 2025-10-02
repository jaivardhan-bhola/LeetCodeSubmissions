class Solution {
private:
    const int MOD = 1e9 + 7;

    long long modPow(long long base, long long exp, long long mod) {
        long long result = 1;
        base %= mod;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }

public:
    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2;
        long long oddPositions = n / 2;
        long long evenPart = modPow(5, evenPositions, MOD);
        long long oddPart = modPow(4, oddPositions, MOD);
        return (evenPart * oddPart) % MOD;
    }
};
