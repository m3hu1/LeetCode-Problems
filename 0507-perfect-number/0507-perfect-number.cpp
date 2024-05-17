class Solution {
public:
    bool checkPerfectNumber(int num) {
        int temp = num;
        for (int i = 1; i <= num / 2; i++) {
            if (temp < 0) return false;
            else if (num % i == 0) temp = temp - i;
        }
        return temp == 0;
    }
};