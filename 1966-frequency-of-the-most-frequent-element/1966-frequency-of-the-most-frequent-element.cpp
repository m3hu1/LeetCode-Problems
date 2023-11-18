// m3hu1
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int j = nums.size()-1, i = nums.size()-2, maxfrequency = 1, curr = 1, K = 0;
        while(i>=0){
            if(K+nums[j]-nums[i]<=k){
                K += nums[j]-nums[i];
                ++curr; --i; 
                maxfrequency = max(maxfrequency,curr);
            }
            else{
                K -= (nums[j]-nums[j-1])*(j-i-1);
                --j; --curr;
                if(i==j) ++curr, --i;
            }
        }
        return maxfrequency;
    }
};