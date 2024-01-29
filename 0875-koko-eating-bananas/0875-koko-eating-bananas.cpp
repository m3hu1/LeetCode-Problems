class Solution {
public:
    int findMax(vector<int> &piles) {
        int ans = 0;
        for(int i=0;i<piles.size();i++) {
            ans = max(ans, piles[i]);
        }
        return ans;
    }

    long long calcTotalHours(vector<int> &piles, int h) {
        long long ans = 0;
        for(int i=0;i<piles.size();i++) {
            ans += ceil((double)piles[i] / (double)h);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);
        while(low <= high) {
            int mid = low + (high - low) / 2;
            long long totalHours = calcTotalHours(piles, mid);
            if(totalHours <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};