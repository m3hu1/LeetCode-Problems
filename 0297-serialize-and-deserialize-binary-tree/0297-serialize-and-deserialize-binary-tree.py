# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:

    def serialize(self, root):
        """Encodes a tree to a single string.
        
        :type root: TreeNode
        :rtype: str
        """
        def helper(node):
            if not node:
                return "N,"
            return str(node.val) + "," + helper(node.left) + helper(node.right)

        return helper(root)
        
    def deserialize(self, data):
        """Decodes your encoded data to tree.
        
        :type data: str
        :rtype: TreeNode
        """
        values = iter(data.split(","))
        
        def helper(values):
            val = next(values)
            if val == "N":
                return None
            node = TreeNode(int(val))
            node.left = helper(values)
            node.right = helper(values)
            return node

        return helper(values)
        
# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))