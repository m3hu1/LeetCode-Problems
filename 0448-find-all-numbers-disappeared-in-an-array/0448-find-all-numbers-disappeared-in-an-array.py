class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        count = Counter(nums)
        ans = []

        for i in range(1, len(nums) + 1):
            if i not in count:
                ans.append(i)

        return ans