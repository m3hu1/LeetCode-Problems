class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if (num % 3 != 0) return {};
        long long i = num / 3;
        return {i - 1, i, i + 1};
    }
};