class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int remainder = 0, digitSum = 0;
        int element = std::accumulate(nums.begin(), nums.end(), 0);
        for (auto x : nums) {
            while (x >= 10) {
                remainder = x % 10;
                digitSum += remainder;
                x /= 10;
            }
            digitSum += x;
        }
        return std::abs(element - digitSum);
    }
};