class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        unordered_map<string, vector<string>> a;
        for(auto i: strs){
            string b = i;
            sort(b.begin(),b.end());
            a[b].push_back(i);
        }
        vector<vector<string>> c;
        for(auto i:a){
            c.push_back(i.second);
        }
        return c;
    }
};