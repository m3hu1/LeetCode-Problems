class Solution:
    def canMakeSubsequence(self, str1: str, str2: str) -> bool:
        i = j = 0

        while i < len(str1):
            nxt = chr(ord(str1[i]) + 1) if str1[i] != 'z' else 'a'
            if str1[i] == str2[j] or nxt == str2[j]:
                j += 1
                print(nxt)
                if j == len(str2):
                    return True
            i += 1
        
        return False