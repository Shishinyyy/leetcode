class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        char ltr;
        int num;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '#') {
                num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                i -= 2;
            } else {
                num = s[i] - '0';
            }
            ltr = 'a' + (num - 1);
            ans = ltr + ans;
        }
        return ans;
    }
};