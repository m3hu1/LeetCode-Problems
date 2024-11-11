class Solution:
    def findingUsersActiveMinutes(self, logs: List[List[int]], k: int) -> List[int]:
        ans = [0] * k
        mp = defaultdict(set)

        for idx, log in enumerate(logs):
            ID, time = log[0], log[1]
            mp[ID].add(time)
        
        for ID, time in mp.items():
            ans[len(time) - 1] += 1
        
        return ans