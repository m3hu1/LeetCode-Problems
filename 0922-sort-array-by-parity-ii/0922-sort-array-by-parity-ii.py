class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        e = list(filter(lambda x: x % 2 == 0, nums))
        o = list(filter(lambda x: x % 2 != 0, nums))

        ans = []

        for i in range(len(nums) // 2):
            ans.append(e[i])
            ans.append(o[i])
        
        return ans