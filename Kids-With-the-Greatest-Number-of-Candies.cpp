class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max = *std::max_element(candies.begin(), candies.end());
        for (int candy : candies) {
            ans.push_back(candy + extraCandies >= max);
        }
        return ans;
    }
};