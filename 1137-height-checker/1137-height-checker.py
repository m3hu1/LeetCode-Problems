# m3hu1
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        counter=0
        for i in range(len(heights)):
            if heights[i]!=sorted(heights)[i]:
                counter+=1
        return counter