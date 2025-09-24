class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        vector<pair<int, double>> cars(pos.size());
        for (int i = 0; i < pos.size(); i++) {
            cars[i] = {pos[i], (double)(target - pos[i]) / speed[i]};
        }
        sort(cars.rbegin(), cars.rend());
        stack<double> times;
        for (auto& car : cars) {
            double time = car.second;
            if (times.empty() || time > times.top()) {
                times.push(time);
            }
        }

        return times.size();
    }
};
