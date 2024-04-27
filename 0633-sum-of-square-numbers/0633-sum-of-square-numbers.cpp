class Solution {
public:
    bool judgeSquareSum(int c) {
        int low = 0;
        int high = sqrt(c);
        while (low <= high) {
            if ((long long)low * low + (long long)high * high == c) return true;
            if (((long long)low * low + (long long)high * high) > c) high--;
            else low++;
        }
        return false;
    }
};