class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int sum = 0;
        int n = s.size();
        
        for (int i = 0; i < n; ++i) {
            int currentVal = roman[s[i]];
            int nextVal = (i + 1 < n) ? roman[s[i + 1]] : 0;
            
            if (currentVal < nextVal) {
                sum -= currentVal;
            } else {
                sum += currentVal;
            }
        }
        
        return sum;
    }
};
