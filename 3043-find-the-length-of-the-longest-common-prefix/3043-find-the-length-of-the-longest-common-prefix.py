class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        # if len(arr1) > len(arr2):
        #     arr1, arr2 = arr2, arr1

        SET = set()
        ans = 0

        for num in arr1:
            while num:
                SET.add(num)
                num //= 10

        for num in arr2:
            curr = 0
            while num:
                if num in SET:
                    curr = len(str(num))
                    break
                num //= 10
            ans = max(ans, curr)

        return ans