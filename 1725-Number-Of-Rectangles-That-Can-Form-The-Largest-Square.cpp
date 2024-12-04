class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n = std::min(rectangles[0][0], rectangles[0][1]), maxNum = 0;
        for (int i = 1; i < rectangles.size(); i++) {
            maxNum = std::min(rectangles[i][0], rectangles[i][1]);
            if (maxNum >= n)
                n = maxNum;
        }
        int count = 0;
        for (int i = 0; i < rectangles.size(); i++) {
            if (rectangles[i][0] >= n && rectangles[i][1] >= n)
                count++;
        }
        return count;
    }
};