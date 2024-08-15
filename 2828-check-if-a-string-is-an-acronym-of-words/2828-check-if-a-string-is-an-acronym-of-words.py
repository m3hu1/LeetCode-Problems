class Solution:
    def isAcronym(self, words: List[str], s: str) -> bool:
        if len(words) != len(s):
            return False
        
        for word in words:
            if word[:1] != s[:1]:
                return False

        return True