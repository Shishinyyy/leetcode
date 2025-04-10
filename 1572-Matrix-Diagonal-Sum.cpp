class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        int j = n - 1;
        for (int i = 0; i < n; i++) {
            sum += mat[i][i] + mat[i][j];
            j--;
        }
        if (n % 2 != 0) {
            int mid = mat[n / 2][n / 2];
            return sum - mid;
        }
        return sum;
    }
};