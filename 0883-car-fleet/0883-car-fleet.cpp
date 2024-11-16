class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<int, double> m;
        for (int i = 0; i < pos.size(); i++)
            m[-pos[i]] = (double)(target - pos[i]) / speed[i];
        int ans = 0;
        double a = 0;
        for (auto it : m)
            if (it.second > a)
                a = it.second, ans++;
        return ans;
    }
};