class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        SET = set(allowed)
        ans = len(words)

        for word in words:
            for j in range(len(word)):
                if word[j] not in SET:
                    ans -= 1
                    break
        
        return ans