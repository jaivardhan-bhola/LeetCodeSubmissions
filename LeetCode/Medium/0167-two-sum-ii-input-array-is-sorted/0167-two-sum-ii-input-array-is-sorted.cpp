class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a = 0, b = numbers.size() - 1, sum = numbers[a]+numbers[b];
        while (target != sum) {
            sum = numbers[a] + numbers[b];
            if (sum > target) 
                b--;
            if (sum < target)
                a++;
        }
        vector<int> ans;
        ans.push_back(a + 1);
        ans.push_back(b + 1);
        return ans;
    }
};