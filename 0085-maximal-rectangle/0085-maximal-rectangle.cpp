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

    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxArea = 0;
        vector <int> height(matrix[0].size(), 0);
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == '1') height[j]++;
                else height[j] = 0;
            }
            int area = largestRectangleArea(height);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};