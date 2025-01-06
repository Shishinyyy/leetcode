class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        string ans = \\;
        for (int i = 0; i < n; i++) {
            char l = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != l)
                    return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};