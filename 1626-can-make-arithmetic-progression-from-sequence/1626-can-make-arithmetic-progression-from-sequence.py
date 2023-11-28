# m3hu1
class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr=sorted(arr)
        diff=arr[1]-arr[0]
        for i in range(1,len(arr)):
            if i+1>=len(arr):
                break
            diff1=arr[i+1]-arr[i]
            if diff != diff1:
                return False
        return True