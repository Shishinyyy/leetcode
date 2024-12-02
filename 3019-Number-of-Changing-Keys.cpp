class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i = 0; i < s.size()-1; i++) {
            if(abs(s[i+1] - s[i]) != 32 && s[i+1] - s[i] != 0)
                count++;
        }
        return count;
    }
};