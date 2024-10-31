class Solution:
    def recoverFromPreorder(self, t: str) -> Optional[TreeNode]:
        arr = []
        arr.append([0, 0])
        temp = '-'

        for i in t:
            if i != '-':
                if temp == '-':
                    arr[-1][1] = int(i)
                else:
                    arr[-1][1] *= 10
                    arr[-1][1] += int(i)
            else:
                if temp == '-':
                    arr[-1][0] += 1
                else:
                    arr.append([1, 0])
            temp = i
        
        mp = {}

        for d, val in arr:
            curr = TreeNode(val)
            mp[d] = curr
            if d != 0:
                papa = mp[d - 1]
                if papa.left is None:
                    papa.left = curr
                else:
                    papa.right = curr
        
        return mp[0]