class Solution {
public:
    vector<int> findErrorNums(vector<int> &nums) {
        int len = nums.size();
        vector<int> res(2);
        vector<bool> seen(len + 1, false);
        for (int i : nums){
            if (seen[i]){
                res[0] = i;
            } else{
                seen[i] = true;
            }
        }
        for (int i=1;i<=len;i++) {
            if (!seen[i]){
                res[1] = i;
                break;
            }
        }
        return res;
    }
};
