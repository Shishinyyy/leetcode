class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int count = std::count(s.begin(), s.end(), '1');
        s = string(n, '0');

        for (int i = 0; i < count - 1; i++) {
            s[i] = '1';
        }
        s[n - 1] = '1';
        return s;
    }
};