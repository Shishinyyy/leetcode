class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1)
            return n;
        for (float i = 1; i <= n; i++) {
            int firstSum = (i / 2) * (1 + i);
            int secondSum = ((n - i + 1) / 2) * (i + n);
            if (firstSum == secondSum)
                return i;
        }
        return -1;
    }
};