class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum = 0, other = 0;
        for(auto x : nums) {
            if(x < 10)
                sum += x;
            else
                other += x;
        }
        return sum > other || sum < other;
    }
};