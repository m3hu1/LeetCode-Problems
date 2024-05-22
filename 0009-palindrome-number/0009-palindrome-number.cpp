class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        long long rev = 0;
        int copy = x;
        while (x) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }
        return (int) rev == copy;
    }
};