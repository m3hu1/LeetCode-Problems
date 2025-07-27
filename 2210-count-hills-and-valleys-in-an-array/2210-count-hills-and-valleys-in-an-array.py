class Solution:
    def countHillValley(self, s: List[int]) -> int:
         cnt = l = 0

         for i in range(1, len(s)-1):
            if(s[i] != s[i+1]):
                if((s[i]>s[l] and 
                s[i]>s[i+1]) or 
                (s[i]<s[l] and 
                s[i]<s[i+1])):
                    cnt += 1
                l = i
                
         return cnt