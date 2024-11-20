class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                                "--.",  "....", "..",   ".---", "-.-",  ".-..",
                                "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                                "...",  "-",    "..-",  "...-", ".--",  "-..-",
                                "-.--", "--.."};

        std::unordered_map<std::string, bool> hashMap;
        int count = 0;
        for (auto& x : words) {
            std::string word = "";
            for (auto& y : x) {
                word += morse[y - 97];
            }
            x = word;
            if (hashMap.find(x) == hashMap.end()) {
                hashMap[x] = true;
                count++;
            }
        }
        return count;
    }
};