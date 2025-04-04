class Solution {
public:
    int minimumSum(int num) {
        string result = to_string(num);
        sort(result.begin(), result.end());
        string min, max;
        min += result[0];
        min += result[3];
        max += result[1];
        max += result[2];
        return stoi(min) + stoi(max);
    }
};