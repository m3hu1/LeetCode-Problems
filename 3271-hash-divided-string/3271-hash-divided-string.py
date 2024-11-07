class Solution:
    def stringHash(self, s: str, k: int) -> str:
        ans = []
        newLen = len(s) // k

        for i in range(newLen):
            sub = s[i * k : (i + 1) * k]
            hashSum = sum([ord(c) - ord('a') for c in sub])
            h = hashSum % 26
            ans.append(chr(h + ord('a')))
        
        return ''.join(ans)