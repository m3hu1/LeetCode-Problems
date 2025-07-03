class Solution:
    def kthCharacter(self, k: int) -> str:
        ans = 0

        while k != 1:
            t = k.bit_length() - 1
            if (1 << t) == k: t -= 1
            ans += 1
            k -= 1 << t

        return chr(ord('a') + ans)