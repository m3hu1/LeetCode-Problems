class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        if len(arr) < 3:
            return False

        maxi, max_idx = 0, 0

        for idx, num in enumerate(arr):
            if maxi < num:
                maxi = num
                max_idx = idx
                if max_idx == len(arr) - 1:
                    return False

        if max_idx == 0:
            return False

        for i in range(max_idx):
            if arr[i] >= arr[i + 1]:
                return False
        
        for i in range(max_idx, len(arr) - 1):
            if arr[i] <= arr[i + 1]:
                return False
        
        return True