class Solution {
public:
    int getMaxDigit(int x) {
        int maxD = 0;
        while (x > 0) {
            int digit = x % 10;
            maxD = max(maxD, digit);
            x = x / 10;
        }
        return maxD;
    }

    int encrypt(int x) {
        int maxD = getMaxDigit(x);
        string enc(to_string(x).size(), to_string(maxD)[0]);
        return stoi(enc);
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;
        for (int num : nums) {
            ans += encrypt(num);
        }
        return ans;
    }
};