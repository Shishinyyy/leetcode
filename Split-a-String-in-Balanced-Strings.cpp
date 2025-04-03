class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0, count = 0;
        for(char ltr : s) {
            if(ltr == 'R') ans++;
            else ans--;
            if(ans == 0) count++;
        }
        return count;
    }
};