class Solution {
public:
    bool checkIfPangram(string sentence) {
        char letter = 'a';
        while(letter <= 'z') {
            if(sentence.find(letter) == std::string::npos)
            return false;
        else
            letter++;
        }
        return true;
    }
};