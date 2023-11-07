// m3hu1
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> dis(256,-1);
        int maxLen = 0;
        int start = -1;
        for(int i = 0;i<n;i++){
            if(dis[s[i]] > start){
                start = dis[s[i]];

            }
            dis[s[i]] = i;
            maxLen = max(maxLen,i-start);
        }
        return maxLen;
    }
};