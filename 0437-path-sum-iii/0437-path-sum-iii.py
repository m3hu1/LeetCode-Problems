# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
        self.count = 0
        def func(node):
            lis = []
            if node.left:
                lis.extend(func(node.left))
            if node.right:
                lis.extend(func(node.right))
            lis = [l+node.val for l in lis]
            lis.append(node.val)
            self.count += lis.count(targetSum)
            return lis
        if root:
            func(root)
        return self.count