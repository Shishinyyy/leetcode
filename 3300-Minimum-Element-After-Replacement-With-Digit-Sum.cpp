class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for (auto x : nums) {
            int num = 0;
            while (x >= 1) {
                int remainder = x % 10;
                x /= 10;
                num += remainder;
            }
            ans = std::min(ans, num);
        }
        return ans;
    }
};