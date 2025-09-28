class Solution {
public:
    int maxDepth(string s) {
        int a=0,b=INT_MIN;
        for(char i:s){
            if(i=='(') a++;
            else if(i==')') a--;
            b=max(b,a);
        }
        return b;
    }
};