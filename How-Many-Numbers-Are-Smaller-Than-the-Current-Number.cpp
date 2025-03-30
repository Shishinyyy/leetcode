class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int> originalNums = nums;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < originalNums.size(); i++) {
            int index = lower_bound(nums.begin(), nums.end(), originalNums[i]) - nums.begin();
            ans.push_back(index);
        }
        return ans;
    }
};