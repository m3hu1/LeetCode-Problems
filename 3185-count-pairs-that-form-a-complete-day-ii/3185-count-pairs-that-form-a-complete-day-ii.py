class Solution:
    def countCompleteDayPairs(self, hours: List[int]) -> int:
        count = Counter()
        ans = 0

        for i in hours:
            mod_i = i % 24
            if mod_i == 0:
                ans += count[0]
            else:
                ans += count[24 - mod_i]
            count[mod_i] += 1
        
        return ans