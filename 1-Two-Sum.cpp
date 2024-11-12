class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> result;
        for (int i = 0; i < nums.size(); i++) {
            int num = target - nums[i];
            if (result.find(num) != result.end()) {
                return {result[num], i};
            }
            result[nums[i]] = i;
        }
        return {};
    }
};