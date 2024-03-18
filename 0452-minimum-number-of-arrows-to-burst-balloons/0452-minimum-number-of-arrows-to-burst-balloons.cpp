class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int ans = points.size();
        vector<int> prev = points[0];
        for (int i = 1; i < points.size(); i++) {
            vector<int> curr = points[i];
            if (curr[0] <= prev[1]) {
                ans--;
                prev[0] = curr[0];
                prev[1] = min(curr[1], prev[1]);
            } else prev = curr;
        }
        return ans;
    }
};