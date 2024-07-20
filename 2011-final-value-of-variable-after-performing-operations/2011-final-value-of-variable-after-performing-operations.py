class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        ans = 0
        
        for string in operations:
            if string == "--X" or string == "X--":
                ans -= 1
            else:
                ans += 1
        
        return ans