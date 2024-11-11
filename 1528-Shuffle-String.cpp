class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans;
        for (int i = 0; i < indices.size(); i++) {
            for (int k = 0; k < indices.size(); k++) {
                if (indices[k] == i)
                    ans += s[k];
            }
        }
        return ans;
    }
};