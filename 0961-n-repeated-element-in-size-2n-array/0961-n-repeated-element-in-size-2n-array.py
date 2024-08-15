class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        n = len(nums) // 2
        print(n)
        count = Counter(nums)
        print(count)

        for num in nums:
            if count[num] == n:
                return num
        
        return -1