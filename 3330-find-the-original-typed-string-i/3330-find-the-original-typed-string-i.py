class Solution:
    def possibleStringCount(self, word: str) -> int:
        ans = len(word)

        for i in range(len(word) - 1, 0 , -1):
            if i < len(word) and word[i] != word[i-1]: ans -= 1
            
        return ans