class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if (x + y < target) return false;
        return target % __gcd(x, y) == 0;
    }
};