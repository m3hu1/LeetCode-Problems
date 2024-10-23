# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def replaceValueInTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        q = deque()
        q.append((root, 0))
        tot = 0

        while q:
            sz = len(q)
            SUM = 0
            for _ in range(sz):
                node, cuhSUM = q.popleft()
                node.val = tot - cuhSUM
                cuhSUM = 0
                if node.left:
                    cuhSUM += node.left.val
                if node.right:
                    cuhSUM += node.right.val
                if node.left:
                    q.append((node.left, cuhSUM))
                if node.right:
                    q.append((node.right, cuhSUM))
                SUM += cuhSUM
            tot = SUM
        
        return root