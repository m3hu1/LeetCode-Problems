# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isUnivalTree(self, root: Optional[TreeNode]) -> bool:
        def helper(node, value) -> bool:
            if not node:
                return True
            if node.val != value:
                return False
            return helper(node.left, value) and helper(node.right, value)

        if not root:
            return True

        return helper(root, root.val)