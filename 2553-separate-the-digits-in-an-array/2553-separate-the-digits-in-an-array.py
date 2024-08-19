class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        ans = []

        # def addDigits(x):
        #     nonlocal ans
        #     while x > 0:
        #         d = x % 10
        #         ans.append(d)
        #         x = x // 10

        # for num in nums:
        #     addDigits(num)

        for num in nums:
            temp = str(num)
            # temp = list(temp)
            for c in temp:
                ans.append(int(c))
        
        return ans