class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0,b=0;
        for(int x:bills){
            if (x==5) a++;
            else if (x==10) {
                if (a==0) return false;
                a--;
                b++;
            }
            else {
                if (a && b) {
                    a--;
                    b--;
                }
                else if (a>=3) a-=3;
                else return false;
            }
        }
        return true;
    }
};