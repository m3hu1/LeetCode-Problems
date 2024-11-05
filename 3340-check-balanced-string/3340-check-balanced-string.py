class Solution:
    def isBalanced(self, num: str) -> bool:
        evenSum = oddSum = 0
        
        for i in range(len(num)):
            if i % 2 == 0:
                evenSum += int(num[i])
            else:
                oddSum += int(num[i])
        
        return evenSum == oddSum