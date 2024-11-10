# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def bstFromPreorder(self, p: List[int]) -> Optional[TreeNode]:
        if len(p) == 0:
            return

        root = TreeNode(p[0])

        def build(root, VAL):
            if root.val > VAL:
                if not root.left:
                    root.left = TreeNode(VAL)
                    return 
                build(root.left, VAL)
            if root.val < VAL:
                if not root.right:
                    root.right = TreeNode(VAL)
                    return
                build(root.right, VAL)

        for i in p[1:]:
            build(root, i)

        return root