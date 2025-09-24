class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if(str1+str2 != str2+str1) return "";
        int anslen = gcd(str1.length(), str2.length());
        return str1.substr(0,anslen);
    }
};