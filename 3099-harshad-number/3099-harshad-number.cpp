class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int ans = 0;
        int xCopy = x;
        while (xCopy > 0) {
            ans += xCopy % 10;
            xCopy /= 10;
        }
        if (x % ans == 0) return ans;
        else return -1;
    }
};