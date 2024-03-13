class Solution {
public:
    int pivotInteger(int n) {
        int tot = n * (n + 1) / 2;
        int low = 1;
        int high = n + 1;
        while (low < high) {
            int mid = (low + high) / 2;
            int leftSum = mid * (mid - 1) / 2;
            int rightSum = tot - leftSum - mid;
            if (leftSum == rightSum) return mid;
            else if (leftSum < rightSum) low = mid + 1;
            else high = mid;
        }
        return -1;
    }
};