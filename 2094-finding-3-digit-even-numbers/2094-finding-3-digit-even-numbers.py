class Solution:
    def findEvenNumbers(self, d: List[int]) -> List[int]:
        mp = defaultdict(int)
        ans = []

        for c in d:
            mp[c] = 1 + mp[c]

        for num in range(100, 1000, 2):
            a = num // 100
            b = (num // 10) % 10
            c = num % 10
            mp[a] -= 1; mp[b] -= 1; mp[c] -= 1
            if mp[a] >= 0 and mp[b] >= 0 and mp[c] >= 0:
                ans.append(num)
            mp[a] += 1; mp[b] += 1; mp[c] += 1
            
        return ans