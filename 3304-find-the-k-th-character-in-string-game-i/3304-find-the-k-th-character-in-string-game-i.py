class Solution:
    def kthCharacter(self, k: int) -> str:
        curr = 'a'

        while len(curr) < k:
            new = ""
            for c in curr:
                new += chr(ord(c) + 1)
            curr += new
        
        return curr[k - 1]