class Solution:
    def subarrayBitwiseORs(self, arr: List[int]) -> int:
        prev, ans = set(), set()

        for num in arr:
            cur = {num}
            for prev_val in prev:
                cur.add(prev_val | num)
            ans.update(cur)
            prev = cur

        return len(ans)