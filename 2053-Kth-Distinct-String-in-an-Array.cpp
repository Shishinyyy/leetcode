class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int count = 0;
        unordered_map<string, int> ans;
        for (auto& x : arr) {
            ans[x]++;
        }
        for (auto& x : arr) {
            if (ans[x] == 1)
                count++;
            if (count == k)
                return x;
        }
    return "";
    }
};