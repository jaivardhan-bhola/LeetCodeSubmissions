class Solution {
public:
    bool isPalindrome(string s) {
        for (auto i = s.begin(); i != s.end(); i++) {
            if (!isalnum(s.at(i - s.begin()))) {
                s.erase(i);
                i--;
            }
        }
        string s2;
        for (auto i : s)
            s2 += (char)tolower(i);
        string s3 = s2;
        reverse(s2.begin(),s2.end());
        if (s2!=s3) return false;
    return true;
    }

};