class Solution:
    def numberOfPoints(self, nums: List[List[int]]) -> int:
        SET = set()

        for s, e in nums:
            for i in range(s, e + 1):
                SET.add(i)
        
        return len(SET)