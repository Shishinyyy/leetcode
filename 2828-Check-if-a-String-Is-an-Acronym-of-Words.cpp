class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        std::string word;
        for(auto& x : words) {
            word += x[0];
        }
        return word == s;
    }
};