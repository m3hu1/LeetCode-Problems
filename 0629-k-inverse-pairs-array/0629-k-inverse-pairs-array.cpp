class Solution {
public:
    int kInversePairs(int n, int k) {
        vector<int> v(k + 1);
        for (int i = 1; i <= n; i++)
            for (int j = k; j >= 0; j--)
                if (j == 0 || j == i * (i - 1) / 2)
                    v[j] = 1;
                else if (j > i * (i - 1) / 2)
                    v[j] = 0;
                else
                    for (int m = j - 1; m >= 0 && j - m < i; m--)
                        v[j] = (v[j] + v[m]) % (int)(pow(10, 9) + 7);
        return v[k];
    }
};
