class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while (low <= high) {
            int mid = (low + high) / 2;
            int i = 0;
            int cnt = 0;
            for (auto day : bloomDay) {
                if (day <= mid) {
                    i++;
                    if (i == k) {
                        cnt++;
                        i = 0;
                    }
                } else i = 0;
            }
            if (cnt >= m) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};