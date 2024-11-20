class Solution:
    def takeCharacters(self, s: str, k: int) -> int:
        cnt = [0, 0, 0]

        for c in s:
            cnt[ord(c) - ord('a')] += 1
            
        if min(cnt) < k:
            return -1

        ans, l = math.inf, 

        for r in range(len(s)):
            cnt[ord(s[r]) - ord('a')] -= 1
            while min(cnt) < k:
                cnt[ord(s[l]) - ord('a')] += 1
                l += 1
            ans = min(ans, len(s) - (r - l + 1))

        return ans