class Solution {
public:
    bool checkValidString(string s) {
        int curr = 0; // currently found
        int tot = 0; // total possible
        for (auto ch : s) {
            if (ch == '(') {
                curr++;
                tot++;
            } else if (ch == ')') {
                curr--;
                tot--;
            } else { // found asterisk
                curr--;
                tot++;
            }
            if (curr < 0) curr = 0; // reset
            if (tot < 0) return false; // if tot is -ve then 's' is invalid
        }
        return curr == 0; // if curr = 0 then 's' is valid
    }
};