class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float> average;
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= nums.size() / 2; i++) {
            float avg = (nums[i] + nums[nums.size() - i - 1]) / 2.0;
            average.push_back(avg);
        }
        return *std::min_element(average.begin(), average.end());
    }
};