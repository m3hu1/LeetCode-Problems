// m3hu1
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        const size_t n = columnTitle.size();
        for(size_t i = 0; i < n; ++i)    
            res += (columnTitle[i] - 'A' + 1) * pow(26, n - i - 1);
        return res;
    }
};