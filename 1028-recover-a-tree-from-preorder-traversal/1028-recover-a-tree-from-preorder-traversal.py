# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def recoverFromPreorder(self, traversal: str) -> Optional[TreeNode]:
        d = {}
        idx = traversal.find('-')

        if idx == -1:
            return TreeNode(int(traversal))

        root = TreeNode(int(traversal[0 : idx]))
        cnt = 0
        num = ""
        d[0]= root

        for i in traversal[idx:]:
            if i == '-':
                if num == "":
                    cnt += 1
                else:
                    node = TreeNode(int(num))
                    parent_node = d[cnt - 1]
                    d[cnt] = node
                    cnt = 1
                    num = ""
                    if parent_node.left is None:
                        parent_node.left = node
                    else:
                        parent_node.right = node
            else:
                num += i

        if num:
            parent_node = d[cnt - 1]
            node = TreeNode(int(num))
            if parent_node.left is None:
                parent_node.left = node
            else:
                parent_node.right = node

        return root