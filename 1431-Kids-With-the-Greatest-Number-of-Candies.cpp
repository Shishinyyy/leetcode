class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int highest = *(std::max_element(candies.begin(), candies.end()));
        for(auto x : candies) {
            result.push_back(x + extraCandies >= highest);
        }
        return result;
    }
};