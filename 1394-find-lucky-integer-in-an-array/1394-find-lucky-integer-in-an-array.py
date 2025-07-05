class Solution:
    def findLucky(self, arr: List[int]) -> int:
        mp, maxi = {}, -1

        for i in arr:
            if i in mp: mp[i] += 1
            else: mp[i] = 1

        for num, x in mp.items():
            if num == x: maxi = max(maxi, num)

        return maxi