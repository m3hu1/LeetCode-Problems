class Solution:
    def checkIfExist(self, nums: List[int]) -> bool:
        count = Counter(nums)

        for num in nums:
            if num == 0 and count[0] < 2:
                continue
            if num in count and num * 2 in count:
                return True
        
        return False