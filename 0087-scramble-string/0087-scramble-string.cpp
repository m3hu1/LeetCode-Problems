// m3hu1
class Solution {
public:
    string str;
    vector<unordered_map<string, bool>> dp;
    bool solve(string s1, int j){
        int n = s1.length();
        if(s1==str.substr(j,n)) return true;
        if(dp[j].find(s1)!=dp[j].end()) return dp[j][s1];
        for(int i=1; i<n; i++){
            string r1 = s1.substr(0,i);
            string r2 = s1.substr(i,n-i);

            // swap
            bool t1 = solve(r2,j) && solve(r1,j+n-i);
            if(t1) return dp[j][s1] = true;
            // not swap
            t1 = solve(r1,j) && solve(r2,j+i);
            if(t1) return dp[j][s1] = true;
        }
        return dp[j][s1] = false;
    }
    bool isScramble(string s1, string s2) {
        dp.resize(s1.length());
        str = s2;
        return solve(s1,0);
    }
};