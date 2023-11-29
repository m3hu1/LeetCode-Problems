# m3hu1
class Solution:
    def average(self, salary: List[int]) -> float:
        res = [x for x in salary if x != max(salary) and  x != min(salary)]
        return sum(res) / len(res)