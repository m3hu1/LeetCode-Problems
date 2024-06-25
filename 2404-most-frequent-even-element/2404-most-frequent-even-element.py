class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        count = Counter([i for i in nums if i % 2 == 0])

        if not count:
            return -1

        max_freq = max(count.values())
        
        return min([i for i, j in count.items() if j == max_freq])