class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for(char c:s){
            if (a.size()==0) a.push(c);
            else if (c==')' && a.top()=='(') a.pop(); 
            else if (c=='}' && a.top()=='{') a.pop(); 
            else if (c==']' && a.top()=='[') a.pop(); 
            else a.push(c);
        }
        if(a.size()==0) return true;
        return false;
    }
};