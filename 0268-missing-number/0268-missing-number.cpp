class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n+1))/2;
        int sum2 = 0;
        for(int i=0;i<n;i++) {
            sum2 += nums[i];
        }
        return sum-sum2;
    }
};