# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minimumOperations(self, root: Optional[TreeNode]) -> int:
        def helper(arr):
            swapcnt = 0
            s_arr = sorted(arr)
            mp = defaultdict(int)
            for idx, num in enumerate(arr):
                mp[num] = idx
            for i in range(len(arr)):
                if arr[i] != s_arr[i]:
                    j = mp[s_arr[i]]
                    arr[i], arr[j] = arr[j], arr[i]
                    mp[arr[j]] = j
                    swapcnt += 1
            return swapcnt
        
        q, ans = deque(), 0
        q.append(root)

        while q:
            sz = len(q)
            level = []
            for _ in range(sz):
                node = q.popleft()
                level.append(node.val)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            ans += helper(level)
        
        return ans