class Solution {
public:
    vector <int> helper(vector<int> &arr, double x) {
        int i = 0;
        int j = 1;
        int cnt = 0;
        int a = 0;
        int b = 0;
        while (max(i, j) < arr.size()) {
            if ((double)arr[i] / arr[j] <= x) {
                cnt += (arr.size() - j);
                if (a * arr[j] <= b * arr[i]) {
                    a = arr[i];
                    b = arr[j];
                }
                i++;
            } else j++;
        }
        return {cnt, a, b};
    }

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector <int> ans;
        double low = 0;
        double high = 1;
        while (low < high) {
            double mid = low + (high - low) / 2;
            ans = helper(arr, mid);
            if (ans[0] < k) low = mid;
            else if (ans[0] > k) high = mid;
            else return {ans[1], ans[2]};
        }
        return {};
    }
};