"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        # ans = []
        ans = deque()

        if not root:
            return ans
        
        stack = []
        stack.append(root)

        while stack:
            node = stack.pop()
            # ans.append(node.val)
            ans.appendleft(node.val)
            if node.children:
                stack.extend(node.children)
            
        return list(ans)