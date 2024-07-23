class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        count = Counter(nums)
        sorted_nums = sorted(nums, key = lambda x: (count[x]))

        return sorted_nums