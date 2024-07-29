class Solution:
    def numTeams(self, r: List[int]) -> int:
        ans = 0
        n = len(r)

        for j in range(1, n - 1):
            left_smaller = 0
            left_greater = 0
            right_smaller = 0
            right_greater = 0
            for i in range(j):
                if r[i] < r[j]:
                    left_smaller += 1
                if r[i] > r[j]:
                    left_greater += 1
            for k in range(j + 1, n):
                if r[k] < r[j]:
                    right_smaller += 1
                if r[k] > r[j]:
                    right_greater += 1
            ans += left_smaller * right_greater + left_greater * right_smaller

        return ans