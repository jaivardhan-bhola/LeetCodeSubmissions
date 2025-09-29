class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        while (i < n && s[i] == ' ') i++;
        if (i == n) return 0;
        int sign = 1;
        if (s[i] == '+' || s[i] == '-') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        return static_cast<int>(parseDigits(s, i, sign, 0));
    }

private:
    long long parseDigits(const string &s, int i, int sign, long long res) {
        int n = s.size();

        if (i == n || !isdigit(s[i])) {
            return sign * res;
        }

        int digit = s[i] - '0';
        if (sign == 1) {
            if (res > (INT_MAX - digit) / 10) return INT_MAX;
        } else {
            if (-res < (INT_MIN + digit) / 10) return INT_MIN;
        }

        res = res * 10 + digit;
        return parseDigits(s, i + 1, sign, res);
    }
};
