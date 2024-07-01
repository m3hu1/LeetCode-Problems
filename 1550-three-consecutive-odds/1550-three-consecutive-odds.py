class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        cnt = 0

        for num in arr:
            if num % 2 == 1:
                cnt += 1
                if cnt == 3:
                    return True
            else: 
                cnt = 0

        return False