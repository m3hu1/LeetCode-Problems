class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill.sort()
        totalskill = skill[0] + skill[-1]
        l, r = 1, len(skill) - 2
        ans = 0

        while l < r:
            if skill[l] + skill[r] == totalskill:
                ans += skill[l] * skill[r]
            else:
                return -1
            l += 1
            r -= 1
        
        return ans + (skill[0] * skill[-1])