# class Solution:
#     def isSubPath(self, head, root) -> bool:
#         memo = {}

#         def dfs(t, l):
#             if not l:
#                 return True
#             if not t:
#                 return False
#             if (t, l) in memo:
#                 return memo[(t, l)]
#             if t.val == l.val:
#                 match = dfs(t.left, l.next) or dfs(t.right, l.next)
#             else:
#                 match = False
#             memo[(t, l)] = match
#             return match

#         def helper(t):
#             if not t:
#                 return False
#             if dfs(t, head):
#                 return True
#             return helper(t.left) or helper(t.right)

#         return helper(root)

class Solution:
    def isSubPath(self, head, root) -> bool:
        @cache
        def dfs(t, l):
            if not l:
                return True
            if not t:
                return False
            if t.val == l.val:
                return dfs(t.left, l.next) or dfs(t.right, l.next)
            return False

        def helper(t):
            if not t:
                return False
            if dfs(t, head):
                return True
            return helper(t.left) or helper(t.right)

        return helper(root)