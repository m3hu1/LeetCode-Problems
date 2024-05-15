class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        vector <int> v;
        for (int i = 0; i < points.size(); i++) v.push_back(points[i][0]);
        sort(v.begin(), v.end());
        int a = 0;
        int b = 0;
        int ans = 0;
        while (a < v.size()) {
            if (v[a] - v[b] > w) {
                ans++;
                b = a;
            }
            a++;
        }
        return ans + 1;
    }
};