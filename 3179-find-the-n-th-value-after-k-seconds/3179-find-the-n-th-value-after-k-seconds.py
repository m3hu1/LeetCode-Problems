class Solution:
    def valueAfterKSeconds(self, n: int, k: int) -> int:
        nums = [1] * n
        temp = 0
        while k:
            for i in range(1, n):
                nums[i] = (nums[i] + nums[i - 1]) % (int(1e9) + 7)
            k -= 1
        
        return nums[n - 1]