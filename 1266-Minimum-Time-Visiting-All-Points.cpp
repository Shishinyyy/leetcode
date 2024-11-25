class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int visits = 0;
        for (int i = 0; i < points.size() - 1; i++) {
            int xFirstVisit = std::abs(points[i][0] - points[i + 1][0]);
            int yFirstVisit = std::abs(points[i][1] - points[i+1][1]);
            visits += std::max(xFirstVisit, yFirstVisit);
        }
        return visits;
    }
};