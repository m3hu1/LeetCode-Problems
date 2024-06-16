class Solution:
    def numPairsDivisibleBy60(self, time: List[int]) -> int:
        count = Counter()
        ans = 0

        for i in time:
            mod_i = i % 60
            if mod_i == 0:
                ans += count[0]
            else:
                ans += count[60 - mod_i]
            count[mod_i] += 1
        
        return ans