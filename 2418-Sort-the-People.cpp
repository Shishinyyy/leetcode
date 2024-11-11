class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> ans;
        for (int i = 0; i < names.size(); i++) {
            ans.push_back({heights[i], names[i]});
        }
        sort(ans.begin(), ans.end(), greater<pair<int, string>>());
        vector<string> result;
        for (auto x : ans) {
            result.push_back(x.second);
        }
        return result;
    }
};