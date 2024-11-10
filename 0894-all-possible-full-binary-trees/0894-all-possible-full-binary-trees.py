# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def allPossibleFBT(self, n: int) -> List[Optional[TreeNode]]:
        @cache
        def helper(d):
            if d == 1:
                return[TreeNode(0)]
            return [TreeNode(0, l, r) for i in range(1, d - 1, 2) for l in helper(i) for r in helper(d - i - 1)]
        
        return helper(n)