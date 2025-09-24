class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        vector<int> b;
        int c;
        for(int i=1;i<=numRows;i++){
            b.clear();
            b.push_back(1);
            c=1;
            for(int j=1;j<i;j++){
                c*=(i-j);
                c/=j;
                b.push_back(c);
            }
            a.push_back(b);
        }

        return a;
    }
};