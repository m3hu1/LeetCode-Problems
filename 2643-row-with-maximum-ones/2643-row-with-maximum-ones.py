class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        ans = []
        maxi = 0
        max_idx = 0

        for i in range(len(mat)):
            cnt = 0
            for j in range(len(mat[0])):
                if mat[i][j] == 1:
                    cnt += 1
            if cnt > maxi:
                maxi = cnt
                max_idx = i
            # maxi = max(maxi, cnt)
        
        ans.append(max_idx)
        ans.append(maxi)

        return ans