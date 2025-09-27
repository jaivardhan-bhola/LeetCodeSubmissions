class Solution {
public:
    bool calc(vector<int>& bloomDay, int m, int k, int s){
        int a=0, b=0;
        for(int i:bloomDay){
            if (i<=s){
                a++;
                if(a==k) {b++; a=0;}
            }
            else a=0;
            if(b==m) return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)bloomDay.size()<(long long)m*k) return -1;
        int l=1,h=*max_element(bloomDay.begin(),bloomDay.end()), mid;
        while(l<h){
            mid=l+(h-l)/2;
            if (calc(bloomDay,m,k,mid)) h=mid;
            else l=mid+1;
        }
        return l;
    }
};