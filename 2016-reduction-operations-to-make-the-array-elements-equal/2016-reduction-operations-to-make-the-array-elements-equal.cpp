// m3hu1
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        
        int n = nums.size(), maxNum = nums[0], minNum = nums[0], sum = 0, ops = 0;
        int count[50001] = {0};

        for(auto num : nums)
        {
            count[num]++;
            maxNum = max(maxNum, num);
            minNum = min(minNum, num);
        }

        for(int i = maxNum; i > minNum; i--)
        {
            if(count[i] == 0)
                continue;
            sum += count[i];
            ops += sum;
        }

        return ops;
    }
};