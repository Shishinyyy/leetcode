class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (auto& x : details) {
            int age = stoi(string(1, x[11]) + string(1, x[12]));
            if (age > 60)
                count++;
        }
        return count;
    }
};