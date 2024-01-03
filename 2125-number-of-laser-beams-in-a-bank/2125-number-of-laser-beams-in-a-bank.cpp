class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m = bank.size(), n = bank[0].size(), ans = 0;
        int prev = 0;
        for(int i = 0 ; i < m; i++ ){
            int curr = 0;
            for(int j = 0 ; j < n; j++){
                if(bank[i][j] == '1'){
                    curr++;
                }
            }
            ans = ans + curr * prev;
            if(curr !=0){
                prev = curr;
            }
        }
        return ans;
    }
};