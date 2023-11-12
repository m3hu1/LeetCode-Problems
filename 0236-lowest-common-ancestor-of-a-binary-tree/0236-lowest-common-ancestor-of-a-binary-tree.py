# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':

        def dfs(root, T, path):
            if not root: return False
            path.append(root)
            if root == T:
                return True
            if root.left:
                if dfs(root.left, T, path):
                    return True
            if root.right:
                if dfs(root.right, T, path):
                    return True
            path.pop()
            return False

        # trace p's path
        ppath = []
        dfs(root, p, ppath)

        # trace q's path
        qpath = []
        dfs(root, q, qpath)
        plen, qlen = len(ppath), len(qpath)
        lca = root
        for i in range(min(plen, qlen)):
            if ppath[i] == qpath[i]:
                lca = ppath[i]
            else:
                break
        
        return lca


        