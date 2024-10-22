# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthLargestLevelSum(self, root: Optional[TreeNode], k: int) -> int:
        q = deque()
        q.append(root)
        # maxi = 0
        # max_values = []
        h = [] # min heap

        while q:
            sz = len(q)
            SUM = 0
            for _ in range(sz):
                node = q.popleft()
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
                SUM += node.val
            heappush(h, SUM)
            if len(h) > k:
                heappop(h)
            # max_values.append(SUM)
        
        return h[0] if len(h) >= k else -1