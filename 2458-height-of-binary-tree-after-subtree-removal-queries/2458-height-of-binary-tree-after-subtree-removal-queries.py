# Definition for a binary tree curr.
# class Treecurr:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def treeQueries(self, root: Optional[TreeNode], q: List[int]) -> List[int]:
        ans = defaultdict(int)
        
        @cache
        def h(curr) -> int:
            if not curr:
                return 0
            
            return 1 + max(h(curr.left), h(curr.right))

        def dfs(curr, d, maxi):
            if not curr:
                return
            ans[curr.val] = maxi
            dfs(curr.left, d + 1, max(maxi, d + h(curr.right)))
            dfs(curr.right, d + 1, max(maxi, d + h(curr.left)))

        dfs(root, 0, 0)

        res = []

        for i in q:
            res.append(ans[i])
        
        return