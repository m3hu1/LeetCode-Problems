// m3hu1
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        for(int i=1;i<nums.size();i++){
            nums[i] += nums[i-1];
        }
        unordered_map<int,int> mpp;
        for(int x : nums){
            if(x == k) cnt++;
            if(mpp.find(x-k) != mpp.end()){
                cnt += mpp[x-k];
            }
            mpp[x]++;
        }
        return cnt;
    }
};