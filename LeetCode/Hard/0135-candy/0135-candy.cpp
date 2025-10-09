class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans=1, peak, down, i=1;
        while(i<ratings.size()){
            if (ratings[i]==ratings[i-1]){
                i++;ans++; continue;
            }
            peak=1;
            while(i<ratings.size() && ratings[i]>ratings[i-1]){
                peak++; ans+=peak;i++;
            }
            down=1;
            while(i<ratings.size() && ratings[i]<ratings[i-1]){
                ans+=down;i++; down++;
            }
            if (down>peak){
                ans+=down-peak;
            }

        }
        return ans;
    }
};