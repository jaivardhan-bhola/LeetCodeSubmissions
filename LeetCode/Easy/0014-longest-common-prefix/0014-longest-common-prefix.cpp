class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        string a=strs[0], b=strs[strs.size()-1];
        for(int i=0;i<min(a.length(),b.length());i++){
            if(a[i]==b[i]) ans+=a[i];
            else return ans;
        }
        return ans;       
    }
};