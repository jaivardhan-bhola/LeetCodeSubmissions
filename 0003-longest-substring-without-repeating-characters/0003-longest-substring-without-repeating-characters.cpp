class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int l=0,r=0, ans=0;
        unordered_set<char> a;
        while(r<s.length()){
            while(a.find(s[r])!=a.end()){
                a.erase(s[l]); l++;
            }
            a.insert(s[r]);
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};