class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0, remainder = 0, originalNum = x;
        while(x > 0) {
            remainder = x % 10;
            sum += remainder;
            x /= 10;
        }
        return originalNum % sum == 0 ? sum : -1;
    }
};