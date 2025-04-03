class Solution {
public:
    int subtractProductAndSum(int n) {
        int remainder = 0, sum = 0, multp = 1;
        while (n >= 1) {
            remainder = n % 10;
            sum += remainder;
            multp *= remainder;
            n /= 10;
        }
        return multp - sum;
    }
};