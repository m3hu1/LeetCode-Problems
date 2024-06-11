class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = defaultdict(int)
        for idx, num in enumerate(nums):
            req = target - num
            if req in mp:
                return [idx, mp[req]]
            mp[num] = idx
        return [-1, -1]