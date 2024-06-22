# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findFrequentTreeSum(self, root: Optional[TreeNode]) -> List[int]:
        count = Counter()

        def getTreeSum(node) -> int:
            if not node:
                return 0
            left = getTreeSum(node.left)
            right = getTreeSum(node.right)
            tot = left + right + node.val
            count[tot] += 1
            return tot
        
        getTreeSum(root)
        maxi = float('-inf')

        for i in count.values():
            if i > maxi:
                maxi = i
        
        ans = []

        for i in count.keys():
            if count[i] == maxi:
                ans.append(i)
        
        return ans