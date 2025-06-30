class Solution:
    def findLHS(self, nums: List[int]) -> int:
        mp, maxi = Counter(nums), 0

        for num, cnt in mp.items():
            if num + 1 in mp:
                maxi = max(maxi, mp[num + 1] + cnt)
        
        return maxi