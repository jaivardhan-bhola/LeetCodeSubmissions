class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0);
        for(char i:s) a[i-'a']++;
        for (char i:t) {
            if (a[i-'a']==0) return false; 
            a[i-'a']--;
        }
        for(int i:a) if (i!=0) return false;
        return true;
    }
};