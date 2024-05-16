class Solution {
public:
    void helper(vector<vector<int>>& image, int color, int a, int b, int mc) {
        if (a < 0 || b < 0 || a >= image.size() || b >= image[0].size()) return;
        if (image[a][b] == color) return;
        if (image[a][b] != mc) return;
        image[a][b] = color;
        helper(image, color, a + 1, b, mc);
        helper(image, color, a - 1, b, mc);
        helper(image, color, a, b + 1, mc);
        helper(image, color, a, b - 1, mc);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        helper(image, color, sr, sc, image[sr][sc]);
        return image;
    }
};