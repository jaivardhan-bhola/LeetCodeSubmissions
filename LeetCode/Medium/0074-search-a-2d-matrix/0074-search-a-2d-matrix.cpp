class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, h=matrix.size()*matrix[0].size()-1, mid, r,c;
        while (l<=h){
            mid=l+(h-l)/2;
            r=mid/matrix[0].size();
            c=mid%matrix[0].size();
            if(target==matrix[r][c]) return true;
            else if (target<matrix[r][c]) h=mid-1;
            else l=mid+1;
        }
        return false;
    }
};