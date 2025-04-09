class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        int i=0, j=0;
        string ans = "";
        while(i< word1.length() && j< word2.length()) {
            ans+= word1[i];
            i++;
            ans+= word2[j];
            j++;
        }
        if (i!=word1.length()) while(i<word1.length()) {ans+=word1[i]; i++;}
        if (j!=word2.length()) while(j<word2.length()) {ans+=word2[j]; j++;}
        return ans;
    }
};