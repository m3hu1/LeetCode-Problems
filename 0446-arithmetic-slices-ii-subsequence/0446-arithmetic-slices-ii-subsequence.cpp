#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
 public:
  int numberOfArithmeticSlices(vector<int>& nums) {
    int sz = nums.size();
    vector<unordered_map<long long, int>> memo(sz, unordered_map<long long int, int>());
    int res = 0;
    for (int i = sz - 1; i >= 0; --i) {
      int anchor = nums[i];
      for (int j = i - 1; j >= 0; --j) {
        int comp = nums[j];
        long long diff = (long long)anchor - comp;
        if (memo[i].find(diff) == memo[i].end()) {
          memo[j][diff] += 1;
        } else {
          int prev = memo[i][diff];
          memo[j][diff] += 1 + memo[i][diff];
          res += prev;
        }
      }
    }
    return res;
  }
};