class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        ans = []
        count = Counter(nums)
        freq = [[] for _ in range(len(nums) + 1)]

        for i, j in count.items():
            freq[j].append(i)
        
        for i in range(len(freq) - 1, -1, -1):
            for val in freq[i]:
                ans.append(val)
                if len(ans) == k:
                    return ans
        
        return []