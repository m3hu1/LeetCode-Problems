class Solution {
public:
    int palindrome(string str, int i, int j) {
        int cnt = 0;
        while(i >= 0 && j < str.size() && str[i] == str[j]) {
            cnt++;
            i--;
            j++;
        }
        return cnt;
    }

    int countSubstrings(string s) {
        int cnt = 0;
        for(int i=0; i<s.size(); i++) {
            int oddSizePal = palindrome(s, i, i);
            int evenSizePal = palindrome(s, i, i + 1);
            cnt += evenSizePal + oddSizePal;
        }
        return cnt;
    }
};