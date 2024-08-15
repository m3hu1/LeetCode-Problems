class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(goal) != len(s):
            return False
        
        copy = s * 2

        if goal in copy:
            return True
        
        return False