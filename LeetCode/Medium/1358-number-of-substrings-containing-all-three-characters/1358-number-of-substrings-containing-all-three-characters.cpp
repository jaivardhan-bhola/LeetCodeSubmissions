class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> a(3,-1);
        int ans=0;
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']=i;
            ans+=1+min({a[0],a[1],a[2]});
        };
        return ans;
    }
};