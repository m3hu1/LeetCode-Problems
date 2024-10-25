class Solution:
    def removeSubfolders(self, f: List[str]) -> List[str]:
        ans = curr = []
        f.sort()
        
        for i in f:
            s = i.split('/')
            if not curr or s[:len(curr)] != curr:
                ans.append(i)
                curr = s

        return ans