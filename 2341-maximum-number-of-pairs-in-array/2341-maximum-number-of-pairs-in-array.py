class Solution:
    def numberOfPairs(self, nums: List[int]) -> List[int]:
        ans = []
        count = Counter(nums)
        print(count)
        tot, left = 0, 0

        for num in nums:
            if count[num] >= 2:
                tot += 1
                count[num] -= 2
        
        ans.append(tot)

        for j in count.values():
            if j != 0:
                left += 1
        
        ans.append(left)

        return ans