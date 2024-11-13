class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int> result;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            result[nums[i]] = i;
        }
        for(int x : nums) {
            if ((result.find(x + diff) != result.end()) && 
                (result.find(x + 2 * diff) != result.end()))
            count++;
        }
        return count;
    }
};