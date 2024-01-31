class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int temp = 0;
        int n = temperatures.size();
        vector<int> ans(n, 0);
        for(int i=n-1;i>=0;i--) {
            if(temperatures[i] >= temp) {
                temp = temperatures[i];
            } else {
                int j = i+1;
                while(temperatures[j] <= temperatures[i]) {
                    j += ans[j];
                }
                ans[i] = j - i;
            }
        }
        return ans;
    }
};