class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 0) return 0;
        int ans = 0;
        int low = 0;
        int high = height.size() - 1;
        int lMax = height[low];
        int rMax = height[high];
        while (low < high) {
            if (lMax < rMax) {
                low++;
                lMax = max(lMax, height[low]);
                ans += lMax - height[low];
            } else {
                high--;
                rMax = max(rMax, height[high]);
                ans += rMax - height[high];
            }
        }
        return ans;
    }
};