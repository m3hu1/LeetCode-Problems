from typing import List

class Solution:
    def maxProduct(self, w: List[str]) -> int:
        ans = 0
        words = list(set(w))
        mp = []

        for word in w:
            temp = [0] * 26
            for char in word:
                temp[ord(char) - ord('a')] = 1
            mp.append(temp)

        for i in range(len(w)):
            for j in range(i + 1, len(w)):
                flag = False
                for k in range(26):
                    if mp[i][k] & mp[j][k]:
                        flag = True
                        break
                if not flag:
                    ans = max(ans, len(w[i]) * len(w[j]))
        
        return ans