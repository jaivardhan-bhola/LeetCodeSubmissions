class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        stack<int> st;
        vector<int> ans(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int j = st.top();
                st.pop();
                ans[j] = i - j;
            }
            st.push(i);
        }

        return ans;
    }
};