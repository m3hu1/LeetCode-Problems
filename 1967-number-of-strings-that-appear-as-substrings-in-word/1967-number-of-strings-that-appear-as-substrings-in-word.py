class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        cnt = 0

        for p in patterns:
            if p in word:
                cnt += 1
        
        return cnt