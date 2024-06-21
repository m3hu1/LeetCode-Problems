class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        def helper(num) -> bool:
            num_copy = num
            while num != 0:
                digit = num % 10
                if digit == 0 or num_copy % digit != 0:
                    return False
                num = num // 10
            return True
        
        ans = []

        while left <= right:
            if helper(left):
                ans.append(left)
            left += 1
        
        return ans