class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        ans = 0
        AP = set(nums)

        for num in nums:
            if num - diff in AP and num + diff in AP:
                ans += 1
        
        return ans