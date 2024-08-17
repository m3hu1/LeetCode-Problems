class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        low = 0
        high = len(arr)
        # maxi = float('-inf')

        while low < high:
            mid = (low + high) // 2
            # maxi = max(maxi, mid)
            if arr[mid] < arr[mid + 1]:
                low = mid + 1
            else:
                high = mid
        
        return low