class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;

        for (auto word : words) {
            if (word.find(separator) == string::npos) {
                ans.push_back(word);
            } else {
                string temp = "";
                for (auto ch : word) {
                    if (ch == separator) {
                        if (!temp.empty()) {
                            ans.push_back(temp);
                            temp.clear();
                        }
                    } else {
                        temp += ch;
                    }
                }
                if (!temp.empty()) {
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};