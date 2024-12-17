class Solution {
public:
    int minimumChairs(string s) {
        int e = 0, max = 0;
        for(auto x : s) {
            x == 'E' ? e++ : e--;
            if(e > max)
                max = e;
        }
        return max;
    }
};