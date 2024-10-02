class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        nums = sorted(set(arr))
        mp = defaultdict(int)

        for a, b in enumerate(nums):
            mp[b] = a + 1
        
        return [mp[num] for num in arr]