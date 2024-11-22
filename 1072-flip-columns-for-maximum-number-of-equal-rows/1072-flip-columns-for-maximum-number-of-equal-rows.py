class Solution:
    def maxEqualRowsAfterFlips(self, mat: List[List[int]]) -> int:
        arr = defaultdict(int)

        for r in mat:
            arr[tuple(r)] += 1
            f = [1 - x for x in r]
            arr[tuple(f)] += 1

        return max(arr.values())     
        