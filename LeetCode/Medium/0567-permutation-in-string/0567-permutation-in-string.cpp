class Solution {
public:
    bool solve(vector<int>&freq){
        for(auto i:freq) if(i!=0) return 0;
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if(s1.size()>s2.size()) return 0;
        int a=0,b=0;
        vector<int>freq(26,0);
        for(auto c:s1){
            freq[c-'a']++;
        }
        while(b<s2.size()){
            freq[s2[b]-'a']--;
            if(b-a+1>s1.size()){
                freq[s2[a]-'a']++;
                a++;
            }
            if(solve(freq)) return 1;
            b++;
        }
        return 0;
    }
};