class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string firstWord, secondWord;
        for (auto x : word1)
            firstWord += x;
        for (auto y : word2)
            secondWord += y;
        return firstWord == secondWord;
    }
};