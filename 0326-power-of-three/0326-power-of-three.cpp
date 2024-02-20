class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        double logValue = log10(n) / log10(3);
        return logValue == (int)logValue;
    }
};