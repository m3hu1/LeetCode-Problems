class Solution:
    def createBinaryTree(self, desc):
        mp = {}
        vis = set()
        
        for vec in desc:
            parent, child, isleft = vec
            if parent not in mp:
                mp[parent] = TreeNode(parent)
            if child not in mp:
                mp[child] = TreeNode(child)
            if isleft == 1:
                mp[parent].left = mp[child]
            else:
                mp[parent].right = mp[child]
            vis.add(child)
        
        for vec in desc:
            parent = vec[0]
            if parent not in vis:
                return mp[parent]
        
        return None