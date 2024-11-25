class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0, count = 0;
        for(auto x : s) {
            if(x == '*' && count % 2 == 0)
                ans++;
            if(x == '|')
                count++;
        }
        return ans;
    }
};