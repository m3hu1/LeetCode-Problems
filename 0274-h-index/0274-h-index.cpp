// m3hu1
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int sz=citations.size();
        sort(citations.begin(), citations.end());
        for (int i=0;i<sz;i++) {
            if (citations[i]>=sz-i) {
                return sz-i;
            }
        }
        return 0;
    }
};