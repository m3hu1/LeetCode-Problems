class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans(2);
        unordered_map<int,int> lost;
        for(int i=0;i<matches.size();i++)lost[matches[i][1]]++;
        for(int i=0;i<matches.size();i++){
            int winner = matches[i][0];
            int looser = matches[i][1];
            if(!lost[winner]){
                ans[0].push_back(winner);
                lost[winner]=2;
            }
            if(lost[looser]==1)ans[1].push_back(looser);
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};