class Solution:
    def leftmostBuildingQueries(self, h: List[int], queries: List[List[int]]) -> List[int]:
        ans, heap = [-1] * len(queries), []
        p = defaultdict(list)

        for i, x in enumerate(queries):
            l, r = sorted(x)
            if l == r or h[r] > h[l]:
                ans[i] = r
            else:
                maxi = max(h[l], h[r])
                p[r].append((maxi, i))

        for i, h in enumerate(h):
            for qh, qi in p[i]:
                heappush(heap, (qh, qi))
            while heap and h > heap[0][0]:
                qh, qi = heappop(heap)
                ans[qi] = i

        return