class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        arr = [0] * (1 + len(A))
        ans = [0] * len(A)
        curr = 0

        for i in range(len(A)):
            arr[A[i]] += 1
            if arr[A[i]] == 2: 
                curr += 1
            arr[B[i]] += 1
            if arr[B[i]] == 2: 
                curr += 1
            ans[i] = curr
        
        return ans