class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int num = 0, maxNum = 0;
        for (auto& s : sentences) {
            num = count(s.begin(), s.end(), ' ') + 1;
            maxNum = max(num, maxNum);
        }
        return maxNum;
    }
};
