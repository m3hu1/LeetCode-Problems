class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        # n = len(nums) // 2
        
        count = Counter(nums)

        for i, j in count.items():
            if j % 2 != 0:
                return False
        
        return True