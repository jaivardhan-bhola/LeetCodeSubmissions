class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        unordered_map<int, int> a;
        for(auto i: nums) a[i]++; 
        priority_queue <int, vector<int>, greater<int>> ktop;
        for(auto i: a){
            ktop.push(i.second);
            if (ktop.size()>k) ktop.pop();
        }
        while(!ktop.empty()){
            int freq=ktop.top();
            for(auto i:a){
                if(i.second==freq){
                ans.push_back(i.first);
                ktop.pop();
                }
            }
        }
        return ans;
    }
};