class Solution:
    def compressedString(self, word: str) -> str:
        comp = []
        i = 0

        while i < len(word):
            c = word[i]
            curr_len = 0
            while i < len(word) and curr_len < 9 and word[i] == c:
                curr_len += 1
                i += 1
            comp += str(curr_len) + c
        
        return ''.join(comp)