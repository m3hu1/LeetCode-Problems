class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};