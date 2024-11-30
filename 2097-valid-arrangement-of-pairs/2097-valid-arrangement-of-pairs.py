class Solution:
    def validArrangement(self, pairs: List[List[int]]) -> List[List[int]]:
        g = defaultdict(list)
        d = defaultdict(int)

        for src, des in pairs:
            g[src].append(des)
            d[src] += 1
            d[des] -= 1

        start = pairs[0][0]

        for node in d:
            if d[node] == 1:
                start = node
                break

        temp, ans = [], []

        def dfs(node):
            while g[node]:
                child = g[node].pop()
                dfs(child)
            temp.append(node)

        dfs(start)
        temp.reverse()

        # for i in range(len(temp) - 2, -1, -1):
        #     ans.append([temp[i], temp[i + 1]])

        for i in range(len(temp) - 1):
            ans.append([temp[i], temp[i + 1]])

        return temp