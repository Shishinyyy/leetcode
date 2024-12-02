class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        string word = "";
        for(auto& x : sentence) {
            if(x != ' ')
                word.push_back(x);
            else {
                words.push_back(word);
                word.clear();
            }
        }
        words.push_back(word);
        for(int i = 0; i < words.size(); i++) {
            if(words[i].find(searchWord) == 0)
                return i + 1;
        }
        return -1;
    }
};