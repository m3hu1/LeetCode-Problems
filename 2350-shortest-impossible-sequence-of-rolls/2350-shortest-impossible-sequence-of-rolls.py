class Solution:
    def shortestSequence(self, r: List[int], k: int) -> int:
        x, ans = 0, 1

        while 1:
            mp = defaultdict(int)
            while len(mp) != k:
                if x == len(r):
                    return ans
                mp[r[x]] += 1
                x += 1
            ans += 1
        