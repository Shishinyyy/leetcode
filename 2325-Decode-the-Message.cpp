class Solution {
public:
    string decodeMessage(string key, string message) {
        string word = "";
        size_t pos = 0;
        std::unordered_set<char> dupl;
        std::string newKey;

        key.erase(std::remove(key.begin(), key.end(), ' '), key.end());
        for (char c : key) {
            if (dupl.find(c) == dupl.end()) {
                newKey += c;
                dupl.insert(c);
            }
        }

        for (int i = 0; i < message.size(); i++) {
            if (message[i] == ' ') {
                word += message[i];
            } else {
                pos = newKey.find(message[i]);
                word += 97 + pos;
            }
        }
        return word;
    }
};