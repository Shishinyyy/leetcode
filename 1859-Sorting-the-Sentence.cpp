class Solution {
public:
    string sortSentence(string s) {
        vector<string> sentence(9);
        int lastChar = 0;
        string ans = "";
        string word = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                lastChar = word.back() - '0' - 1;
                word.pop_back();
                sentence[lastChar] = word;
                word = "";
            }
        }
        lastChar = word.back() - '0' - 1;
        word.pop_back();
        sentence[lastChar] = word;

        for (auto y : sentence) {
            if (!y.empty())
                ans += y + " ";
        }
        ans.pop_back();
        return ans;
    }
};