class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num > 0)
        {
            num % 2 == 0 ? num /= 2 : num--;
            count++;
        } 
        return count;
    }
};