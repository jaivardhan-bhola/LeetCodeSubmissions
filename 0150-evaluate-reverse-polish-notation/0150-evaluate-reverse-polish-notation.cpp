class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        stack<string> st;
        int a, ans;
        for (auto i : tokens) {
            if (i == "+") {
                a = stoi(st.top());
                st.pop();
                ans = stoi(st.top());
                st.pop();
                ans += a;
                st.push(to_string(ans));
            } else if (i == "-") {
                a = stoi(st.top());
                st.pop();
                ans = stoi(st.top());
                st.pop();
                ans -= a;
                st.push(to_string(ans));
            } else if (i == "*") {
                a = stoi(st.top());
                st.pop();
                ans = stoi(st.top());
                st.pop();
                ans *= a;
                st.push(to_string(ans));
            } else if (i == "/") {
                a = stoi(st.top());
                st.pop();
                ans = stoi(st.top());
                st.pop();
                ans /= a;
                st.push(to_string(ans));

            } else
                st.push(i);
        }
        return stoi(st.top());
    }
};