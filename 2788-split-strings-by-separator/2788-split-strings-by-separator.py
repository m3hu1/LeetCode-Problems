class Solution:
    def splitWordsBySeparator(self, words: List[str], sep: str) -> List[str]:
        ans = []

        for word in words:
            new = [i for i in word.split(sep) if i]
            ans.extend(new)
        
        return ans