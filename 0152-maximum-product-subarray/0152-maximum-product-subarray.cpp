// m3hu1
class Solution {
public:
    int maxProduct(vector<int>& nums) {
      if (nums.empty())
				return 0;

			if (nums.size() == 1)
				return nums.back();

		int currMin = 0;
		int currMax = 0;
		int maxRes = INT_MIN;
		for (int i : nums)
		{
			if (0 == i)
			{
				currMax = 0;
				currMin = 0;
			}
			else if (i < 0)
			{
				int temp = currMax;
				currMax = max(currMin*i, i);
				currMin = min(temp*i, i);
			}
			else
			{
				currMax = max(currMax*i, i);
				currMin = min(currMin*i, i);
			}

			maxRes = max(currMax, maxRes);
		}
		return maxRes;
    }
};