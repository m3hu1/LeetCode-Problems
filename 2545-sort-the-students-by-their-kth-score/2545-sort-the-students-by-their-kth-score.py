class Solution:
    def sortTheStudents(self, score: List[List[int]], k: int) -> List[List[int]]:
        mp = defaultdict(int)

        for stu in score:
            mp[stu[k]] = stu
        
        mp2 = sorted(mp, reverse = True)
        ans = []

        for marks in mp2:
            ans.append(mp[marks])
        
        return ans