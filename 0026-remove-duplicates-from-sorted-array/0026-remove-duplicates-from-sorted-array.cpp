class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        int c=0;
        for(int i=1;i<nums.size();i++){
            if(nums[c]!=nums[i]){
                nums[c+1]=nums[i];
                c++;
            }
        }
        return c+1;
    }
};