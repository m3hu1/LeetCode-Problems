class Solution:
    def processQueries(self, qu: List[int], m: int) -> List[int]:
        arr = [i for i in range(1, m + 1)]
        ans = []

        for q in qu:
            ans.append(arr.index(q))
            arr.insert(0, arr.pop(arr.index(q)))
        
        return ans