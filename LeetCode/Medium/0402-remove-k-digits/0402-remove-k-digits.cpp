class Solution {
public:
    string removeKdigits(string num, int k) {
        stack <char> st;
        for(char i: num){
            while(!st.empty() && k > 0
                  && st.top() > i) {
                st.pop();
                k--; 
            }
            
            st.push(i);
        }
        
        while(!st.empty() && k > 0) {
            st.pop(); 
            k--; 
        }
        if(st.empty()) return "0";
        
        string res = "";
        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        while(res.size() > 0 && 
              res.back() == '0') {

            res.pop_back();
        }
        
        reverse(res.begin(), res.end());
        if(res.empty()) return "0";
        return res;
    }
};