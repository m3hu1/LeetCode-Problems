class Solution:
    def minimumPushes(self, word: str) -> int:
        count = Counter(word)
        sc = sorted(count.values(), reverse=True)
        ans = 0

        for i, cnt in enumerate(sc):
            ans += cnt * (i // 8 + 1)
        
        return ans