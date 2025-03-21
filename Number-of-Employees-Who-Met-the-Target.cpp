class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans = 0;
        for (auto hour : hours) {
            if (target <= hour) {
                ans++;
            }
        }
        return ans;
    }
};