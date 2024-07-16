# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getDirections(self, root: Optional[TreeNode], sV: int, dV: int) -> str:
        def helper(node, dest):
            if not node:
                return None
            if dest == node.val:
                return []
            l = helper(node.left, dest)
            r = helper(node.right, dest)
            if l is not None:
                l.append('L')
            if r is not None:
                r.append('R')
            return l or r
        
        # double stack
        a = helper(root, sV)
         = helper(root, dV)

        while a and b and a[-1] == b[-1]:
            a.pop()
            b.pop()
        
        return 'U' * len(a) + ''.join(reversed(b)) # up + down