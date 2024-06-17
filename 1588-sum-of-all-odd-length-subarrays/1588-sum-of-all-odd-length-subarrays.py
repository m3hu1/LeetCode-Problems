class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        ans = 0

        for i in range(len(arr)):
            tot_sub = (i + 1) * (len(arr) - i) # total no. of subarrays
            tot_odd = (tot_sub + 1) // 2 # total odd subarrays
            ans += arr[i] * tot_odd
        
        return ans