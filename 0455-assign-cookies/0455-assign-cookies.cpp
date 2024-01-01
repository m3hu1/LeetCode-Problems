class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int n=g.size(),m=s.size(),count=0,i=0,j=0;
        while(i<n&&j<m){
            if(s[j]>=g[i]){
                i++;
                j++;
                count++;
            }
            else {
                j++;
            }
        }
        return count;
    }
};