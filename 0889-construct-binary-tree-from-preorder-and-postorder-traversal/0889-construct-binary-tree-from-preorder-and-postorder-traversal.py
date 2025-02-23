# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def constructFromPrePost(self, preorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        if not preorder or not postorder:
            return None
        
        root = TreeNode(preorder.pop(0))
        postorder.pop(-1)
        
        if preorder:
            char = preorder[0]
            i = postorder.index(char)
            root.left = self.constructFromPrePost(preorder[0: i + 1], postorder[0:i+1])
            root.right = self.constructFromPrePost(preorder[i+1:], postorder[i+1:])
            
        return root