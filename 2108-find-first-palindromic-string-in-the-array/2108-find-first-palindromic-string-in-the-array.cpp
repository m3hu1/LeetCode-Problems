class Solution {
public:
    bool isPalindrome(string str) {
        int left = 0;
        int right = str.size() - 1;
        for(int i=0; i<str.size(); i++) {
            if(str[left] != str[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++) {
            if(isPalindrome(words[i])) {
                return words[i];
            }
        }
        return "";
    }
};