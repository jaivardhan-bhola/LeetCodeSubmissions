class Solution {
public:
    string removeOuterParentheses(string s) {
        int a=0;
        string ans;
        for(char i:s){
            if(i=='(') {
            if(a>0) ans+=i; a++;}
            if(i==')') {a--;
            if(a>0) ans+=i;}

        }
        return ans;
    }
};