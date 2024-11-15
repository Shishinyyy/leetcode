class Solution {
public:
    int maxDepth(string s) {
        int max = 0, count = 0;
        for(char x : s) {
            if(x == '(')
                count++;
            if(x == ')')
                count--;
            max = std::max(max, count);
        }
    return max;
    }
};