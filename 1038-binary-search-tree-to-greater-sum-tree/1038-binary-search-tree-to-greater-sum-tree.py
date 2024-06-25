# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def bstToGst(self, root: TreeNode) -> TreeNode:
        SUM = 0

        def helper(node):
            nonlocal SUM
            if not node:
                return
            helper(node.right)
            temp = node.val
            node.val += SUM
            SUM += temp
            helper(node.left)
        
        helper(root)

        return root