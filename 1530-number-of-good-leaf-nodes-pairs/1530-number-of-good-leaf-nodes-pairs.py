# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countPairs(self, root: TreeNode, distance: int) -> int:
        def dfs(root, lvl):
            l = []
            r = []
            if not root.left and not root.right:
                return [lvl]
            if root.left:
                l = dfs(root.left, lvl + 1)
            if root.right:
                r = dfs(root.right, lvl + 1)
            for i in l:
                for j in r:
                    if distance >= i + j - 2 * lvl:
                        ans[0] = ans[0] + 1
            return [_ for _ in l + r if distance >= _ - lvl]
        
        ans = []
        ans.append(0)

        dfs(root, 0)

        return ans[0]