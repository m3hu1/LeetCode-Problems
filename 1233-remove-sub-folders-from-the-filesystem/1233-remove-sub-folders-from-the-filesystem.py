class Solution:
    def removeSubfolders(self, f: List[str]) -> List[str]:
        f.sort()
        i, ans = 0, [f[0]]

        for j in range(1, len(f)):
            if f[j].find(f[i]) == 0 and f[j][len(f[i])] == '/': continue
            i = j
            ans.append(f[j])

        return ans