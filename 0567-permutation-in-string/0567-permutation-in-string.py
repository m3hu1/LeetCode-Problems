class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s2) < len(s1): 
            return False

        mp1 = [0] * 26
        mp2 = [0] * 26

        for i in range(len(s1)):
            mp1[ord(s1[i]) - ord('a')] += 1
            mp2[ord(s2[i]) - ord('a')] += 1
        
        for i in range(len(s1), len(s2)):
            if mp1 == mp2: 
                return True
            mp2[ord(s2[i]) - ord('a')] += 1
            mp2[ord(s2[i - len(s1)]) - ord('a')] -= 1
        
        return mp1 == mp2
