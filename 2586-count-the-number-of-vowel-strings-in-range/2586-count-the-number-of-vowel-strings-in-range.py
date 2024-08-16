class Solution:
    def vowelStrings(self, words: List[str], left: int, right: int) -> int:
        cnt = 0
        
        for i in range(left, right + 1):
            if words[i][0] in vowels and words[i][-1] in vowels:
                cnt += 1
        
        return cnt