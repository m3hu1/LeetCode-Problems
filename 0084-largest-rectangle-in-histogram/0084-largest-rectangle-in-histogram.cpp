// m3hu1
class Solution {
    struct entry {
        int x;
        int height;
    };
public:
    int largestRectangleArea(vector<int> &heights) {
        int best = 0;
        auto s = stack<entry>{};
        heights.push_back(0);
        for (int i = 0; i < (int) heights.size(); i++) {
            auto h = heights[i];
            auto xMin = i;
            while (!s.empty() && h < s.top().height) {
                best = max(best, s.top().height * (i - s.top().x));
                xMin = min(xMin, s.top().x);
                s.pop();
            }
            if (s.empty() || s.top().height < h) {
                s.emplace(entry{xMin, h});
            }
        }
        return best;
    }
};