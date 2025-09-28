class Solution {
public:
    string reverseWords(string s) {
        int a=0,b=0;
        while (a < s.length() && s[a] == ' ') a++;
        for (; a < s.length(); a++) {
            if (s[a] == ' ' && (b == 0 || s[b - 1] == ' ')) {
                continue;
            }   
            s[b++] = s[a];
            }

        if (b > 0 && s[b - 1] == ' ') b--;
        s.resize(b);
        a=0,b=0;
        reverse(s.begin(), s.end());
        while(b<s.length()){
            if(s[b]!=' ') b++;
            else{
                reverse(s.begin()+a,s.begin()+b);
                b++;
                a=b;
            }
        }
        reverse(s.begin()+a,s.end());
        return s;
    }
};