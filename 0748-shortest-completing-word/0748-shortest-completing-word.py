class Solution:
    def shortestCompletingWord(self, lp: str, words: List[str]) -> str:
        lic = Counter([i for i in lp.lower() if i.isalpha()])
        ans = []

        for word in words:
            curr = Counter(word)
            if len(curr) < len(lic):
                continue
            if not lic - curr:
                ans.append(word)
        
        return min(ans, key = len)