class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> ans;
        for (auto x : arr) {
            if (ans.find(2 * x) != ans.end() ||
                (ans.find(x / 2) != ans.end() && x % 2 == 0))
                return true;
            else
                ans.insert(x);
        }
        return false;
    }
};