class Solution:
    def matchPlayersAndTrainers(self, ps: List[int], ts: List[int]) -> int:
        ans, idx = 0, 0
        ts.sort(reverse = True), ps.sort(reverse = True)

        for x in ps:
            if idx == len(ts): break
            if x <= ts[idx]:
                ans += 1
                idx += 1

        return ans