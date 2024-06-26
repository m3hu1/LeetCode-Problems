# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def balanceBST(self, root: TreeNode) -> TreeNode:
        i = []

        def dfs(node):
            if not node:
                return
            dfs(node.left)
            i.append(node.val)
            dfs(node.right)

        dfs(root)

        def build(l, r):
            if r < l:
                return None
            if r == l:
                return TreeNode(i[r])
            mid = l + (r - l) // 2
            curr = TreeNode(i[mid])
            curr.left = build(l, mid - 1)
            curr.right = build(mid + 1, r)
            return curr
        
        return build(0, len(i))