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
        for(int i=0;i<s2.length()/2;i++) {
         if (s2[i]!=s2[s2.length()-1-i]) return false;
        }
        return true;
    }
};