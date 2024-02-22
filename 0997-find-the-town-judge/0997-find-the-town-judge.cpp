class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustCnt(n, 0);
        for(auto i : trust) {
            trustCnt[i[0] - 1]--;
            trustCnt[i[1] - 1]++;
        }
        for(int i=0; i<n; i++) {
            if(trustCnt[i] == n - 1) {
                return i + 1;
            }
        }
        return -1;
    }
};