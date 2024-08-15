class Solution:
    def averageValue(self, nums: List[int]) -> int:
        avg = 0
        cnt = 0

        for num in nums:
            if num % 2 == 0 and num % 3 == 0:
                avg += num
                cnt += 1

        if cnt == 0:
            return 0
            
        return avg // cnt