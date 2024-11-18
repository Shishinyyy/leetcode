class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int num = 0, max = 0;
        for(auto x : gain) {
            max += x;
            num = std::max(max, num);
        }
        return num;
    }
};