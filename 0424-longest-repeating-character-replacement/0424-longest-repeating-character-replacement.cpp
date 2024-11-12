class Solution {
public:
    int characterReplacement(string s, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int ans = 0;
        for(char c = 'A'; c <= 'Z'; c++)
        {
            int a = 0, b = 0, d = 0;
            while(b < s.size())
            {
                if(s[b] == c)
                    b++;
                else if(d < k)
                    b++, d++;
                else if(s[a] == c)
                    a++;
                else
                    a++, d--;
                ans = max(ans, b - a);
            }
        }
        return ans;
    }
};