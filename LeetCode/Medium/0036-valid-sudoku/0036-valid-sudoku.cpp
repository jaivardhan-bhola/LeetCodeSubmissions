class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> r[9], c[9], b[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if (board[i][j]=='.') continue;
                char num = board[i][j];
                int bi = (i/3)*3  + (j/3);
                if (r[i].count(num) || c[j].count(num) || b[bi].count(num)) return false;
                r[i].insert(num);
                c[j].insert(num);
                b[bi].insert(num);
            }
        }
        return true;
    }
};