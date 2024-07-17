# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        del_set = set(to_delete)
        ans = []

        def helper(node, papa):
            if not node:
                return
            curr = node
            if node.val in del_set:
                curr = None
            if papa is None:
                if curr is not None:
                    ans.append(curr)
            node.left = helper(node.left, curr)
            node.right = helper(node.right, curr)
            return curr
        
        helper(root, None)
        return ans