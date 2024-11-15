class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        char col1 = s[0], row1 = s[1], col2 = s[3], row2 = s[4];
        for(char c = col1; c <= col2; c++) {
            for(char r = row1; r <= row2; r++) {
                string word = "";
                word += c;
                word += r;
                ans.push_back(word);
            }
        }
        return ans;
    }
};