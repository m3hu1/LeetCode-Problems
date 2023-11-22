// m3hu1
#include <vector>
#include <deque>

class Solution {
public:
    std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& nums) {
        std::vector<int> ans;
        int m = nums.size();
        std::deque<std::pair<int, int>> queue;
        queue.push_back({0, 0});
        while (!queue.empty()) {
            auto [row, col] = queue.front();
            queue.pop_front();
            ans.push_back(nums[row][col]);
            if (col == 0 && row + 1 < m) {
                queue.push_back({row + 1, col});
            }
            if (col + 1 < nums[row].size()) {
                queue.push_back({row, col + 1});
            }
        }
        return ans;
    }
};