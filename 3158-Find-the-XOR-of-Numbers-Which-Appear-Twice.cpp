class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> count;
        for(auto x : nums) {
            if(count.find(x) != count.end()) {
                ans ^= x;
            }
            else {
                count[x]++;
            }
        }
        return ans;
    }
};