class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxLength = INT_MIN;
        int ans = 0;
        for (auto i : dimensions) {
            int diaLength = (i[0] * i[0] + i[1] * i[1]);
            if (diaLength > maxLength || (diaLength == maxLength && i[0] * i[1] > ans)) {
                maxLength = diaLength;
                ans = i[0] * i[1];
            }
        }
        return ans;
    }
};