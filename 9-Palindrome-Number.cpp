class Solution {
public:
    bool isPalindrome(int x) {
        long int reversed = 0, num = x;
        if (x < 0)
            return false;
        else if (x < 10)
            return true;
        else {
            while (num >= 1) {
                int remainder = num % 10;
                reversed = reversed * 10 + remainder;
                num /= 10;
            }
        }
        return reversed == x;
    }
};