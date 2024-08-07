class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        count = Counter(arr)
        ans = []

        for s in arr:
            if count[s] == 1:
                ans.append(s)
        
        if len(ans) < k:
            return ""
        
        return ans[k - 1]