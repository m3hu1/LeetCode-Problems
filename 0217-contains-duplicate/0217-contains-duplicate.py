class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        found = set()
        for num in nums:
            if num in found:
                return True
            else:
                found.add(num)
        return False