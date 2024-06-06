class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector <bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 2; i < sqrt(n); i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) isPrime[j] = false;
            }
        }
        int ans = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) ans++;
        }
        return ans;
    }
};