class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack <pair <int, int>> st;
        heights.push_back(0);
        int maxArea = 0;
        for (int i = 0; i < heights.size(); i++) {
            int start = i;
            while (!st.empty() && st.top().second > heights[i]) {
                auto [idx, height] = st.top();
                st.pop();
                maxArea = max(maxArea, height * (i - idx));
                start = idx;
            }
            st.push({start, heights[i]});
        }
        return maxArea;
    }
};