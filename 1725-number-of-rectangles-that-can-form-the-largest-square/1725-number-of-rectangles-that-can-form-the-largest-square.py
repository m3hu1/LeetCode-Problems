class Solution:
    def countGoodRectangles(self, rectangles: List[List[int]]) -> int:
        # cnt = defaultdict(int)
        # for i in rectangles:
        #     maxLen = min(i[0], i[1])
        #     cnt[maxLen] += 1
        # ans = 0
        # for i, j in cnt.items():
        #     ans = max(ans, j)
        # return ans
        cnt = 0
        maxi = 0
        
        for idx, i in enumerate(rectangles):
            maxLen = min(i[0], i[1])
            if maxLen > maxi:
                maxi = maxLen
            rectangles[idx] = maxLen

        for i in rectangles:
            if i == maxi:
                cnt += 1

        return cnt
        # print(rectangles)
        # return 0