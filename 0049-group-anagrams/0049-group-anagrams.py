class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = defaultdict(list)
        ans = []
        for s in strs:
            sorted_s = str(sorted(s))
            mp[sorted_s].append(s)
        for i in mp.values():
            ans.append(i)
        return ans