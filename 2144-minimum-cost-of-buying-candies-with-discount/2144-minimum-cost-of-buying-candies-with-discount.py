class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        cost.sort(reverse = True)
        ans = 0
        cnt = 0

        for candy in cost:
            if cnt == 2:
                cnt = 0
                continue
            cnt += 1
            ans += candy

        return ans