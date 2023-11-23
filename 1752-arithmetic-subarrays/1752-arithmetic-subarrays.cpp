// m3hu1
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size();
        int m = l.size();

        vector<bool> ans(m, false);

        for(int i = 0; i < m; i++){
            int left = l[i];
            int right = r[i];

            vector<int> temp = nums;
            sort(temp.begin()+left, temp.begin()+right+1);

            int diff = temp[left+1]-temp[left];
            int j = left;
            while(j < right){
                if(temp[j+1]-temp[j] != diff) break;
                j++;
            }
            if(j == right) ans[i] = true;
            else ans[i] = false;
        }

        return ans;
    }
};