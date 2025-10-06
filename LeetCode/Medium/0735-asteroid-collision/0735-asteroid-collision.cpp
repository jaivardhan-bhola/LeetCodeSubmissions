class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> as;
        for(int a:asteroids){
            if (a>0)as.push(a);
            else{
                while(!as.empty() && as.top() >0 && as.top()<-a) as.pop();
                if (!as.empty() && as.top()==-a) as.pop();
                else if (as.empty() || as.top()<0) as.push(a);
            }
        }
        vector<int> ans (as.size(), 0);
        for(int i=as.size()-1;i>=0;i--){
            ans[i] = as.top();
            as.pop();
        }
        return ans;
    }
};