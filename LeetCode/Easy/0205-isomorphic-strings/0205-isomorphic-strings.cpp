class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> a;
        unordered_map<char,char> b;
        for(int i=0;i<s.length();i++){
            if(a[s[i]]-'0'==-48) a[s[i]]=t[i];
            else if(a[s[i]]!=t[i]) return false;
            if(b[t[i]]-'0'==-48) b[t[i]]=s[i];
            else if(b[t[i]]!=s[i]) return false;
        }
        return true;
    }
};