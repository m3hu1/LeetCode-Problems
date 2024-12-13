class Solution:
    def findScore(self, nums: List[int]) -> int:
        nums = list(zip(nums, range(len(nums))))
        nums.sort(key = lambda x: x[0])
        vis = set()
        score = 0

        for num, idx in nums:
            if idx in vis:
                continue
            vis.add(idx)
            score += num
            vis.add(idx + 1)
            vis.add(idx - 1)
        
        return score