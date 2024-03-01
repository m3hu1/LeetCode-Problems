class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int low = 0;
        int high = s.size() - 1;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                swap(s[i], s[low]);
                low++;
            }
        }
        swap(s[low - 1], s[high]);
        return s;
    }
};