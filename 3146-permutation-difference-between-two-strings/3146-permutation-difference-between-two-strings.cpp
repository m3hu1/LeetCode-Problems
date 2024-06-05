class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans = 0;
        // unordered_map <char, int> mp1;
        unordered_map <char, int> mp2;
        // int temp1 = 0;
        int temp2 = 0;
        for (char c : t) {
            mp2[c] = temp2++;
            // temp++;
        }
        // for (char c : s) {
        //     mp1[c] = temp1++;
        // }
        for (int i = 0; i < s.size(); i++) {
            ans += abs(i - mp2[s[i]]);
        }
        return ans;
    }
};