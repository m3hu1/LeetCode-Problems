class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        s1 = s1.split(" ")
        c1 = Counter(s1)
        s2 = s2.split(" ")
        c2 = Counter(s2)
        words = c1 + c2

        ans = [w for w, c in words.items() if c == 1]

        return ans