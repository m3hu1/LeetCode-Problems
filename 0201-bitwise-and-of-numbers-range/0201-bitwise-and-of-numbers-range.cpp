class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int cnt = 0;
        while(left != right) {
            left = left >> 1;
            right = right >> 1;
            cnt++;
        }
        return right << cnt;
    }
};