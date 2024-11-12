class Solution:
    def maximumBeauty(self, items: List[List[int]], q: List[int]) -> List[int]:
        ans = []
        i = maxi = 0
        items.sort()
        arr = list(enumerate(q))
        arr.sort(key = lambda x: x[1])

        for idx, q in arr:
            while i < len(items) and q >= items[i][0]:
                maxi = max(maxi, items[i][1])
                i += 1
            ans.append([idx, maxi])
        
        ans.sort()

        return [x[1] for x in ans]