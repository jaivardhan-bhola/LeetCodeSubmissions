class Solution {
public:
    bool isAnagram(string s, string t) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> a (26,0);
        for(char c: s) a[c-97]++;
        for (char c:t) a[c-97]--;
        for (int b:a) if (b!=0) return false; return true;
    }
};