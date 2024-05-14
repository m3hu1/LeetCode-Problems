class Solution {
public:
    int minAddToMakeValid(string s) {
        int close = 0;
        int open = 0;
        for (auto ch : s) {
            if (ch == '(') open++;
            else if (open > 0 && ch == ')') open--;
            else close++;
        }
        return open + close;
    }
};