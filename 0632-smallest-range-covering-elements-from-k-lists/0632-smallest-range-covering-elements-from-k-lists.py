class Solution:
    def smallestRange(self, nums):
        arr = [0] * len(nums)
        first = [lst[0] for lst in nums]
        mini = float('inf')
        ans = [-1, -1]
        
        while True:
            currmini = min(first)
            currmaxi = max(first)

            if currmaxi - currmini < mini:
                mini = currmaxi - currmini
                ans = [currmini, currmaxi]

            idx = first.index(currmini)
            arr[idx] += 1

            if arr[idx] == len(nums[idx]):
                break

            first[idx] = nums[idx][arr[idx]]
        
        return ans