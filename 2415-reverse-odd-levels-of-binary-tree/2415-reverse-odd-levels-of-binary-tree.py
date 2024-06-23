class Solution:
    def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root:
            return None

        q = deque([root])
        level_nodes = defaultdict(list)
        lvl = 0
        
        while q:
            sz = len(q)
            for _ in range(sz):
                node = q.popleft()
                level_nodes[lvl].append(node)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            lvl += 1
        
        for level in level_nodes:
            if level % 2 == 1:
                values = [node.val for node in level_nodes[level]]
                values.reverse()
                for i, node in enumerate(level_nodes[level]):
                    node.val = values[i]
        
        return root