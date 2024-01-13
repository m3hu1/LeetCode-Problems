class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mps,mpt;
        int n = s.size();
        for(int i=0;i<n;i++){
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        if(mps== mpt) return 0;
        int ans = n;
        int common = 0;
        for (auto &it : mpt) {
            if (mps.find(it.first) != mps.end()) {
                ans -= min(it.second, mps[it.first]);
            }
        }
        return ans;
    }
};