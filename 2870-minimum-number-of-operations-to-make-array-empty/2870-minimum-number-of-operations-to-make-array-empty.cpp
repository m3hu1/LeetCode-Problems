class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        int s = 0;
        while(s < nums.size()){
            int e = s;
            while(e < nums.size() && nums[e] == nums[s]) {
                e++;
            }
            int count = e-s;
            if(count == 1) return -1;
            res += count/3;
            if(count%3 != 0) res++;
            s=e;
        }
        return res;
    }
};