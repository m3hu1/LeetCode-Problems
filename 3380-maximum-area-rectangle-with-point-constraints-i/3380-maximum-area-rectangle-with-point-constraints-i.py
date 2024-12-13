class Solution:
    def maxRectangleArea(self, points: List[List[int]]) -> int:
        if len(points) < 4:
            return -1

        SET = set(map(tuple, points))
        maxi = -1
        ps = sorted(map(tuple, points))
        n = len(ps)

        for i in range(n):
            for j in range(i + 1, n):
                p1 = ps[i]
                p2 = ps[j]
                if p1[0] != p2[0] and p1[1] != p2[1]:
                    p3 = (p1[0], p2[1])
                    p4 = (p2[0], p1[1])
                    if p3 in SET and p4 in SET:
                        width = abs(p2[0] - p1[0])
                        height = abs(p2[1] - p1[1])
                        area = width * height
                        min_x, max_x = sorted([p1[0], p2[0]])
                        min_y, max_y = sorted([p1[1], p2[1]])
                        valid = True
                        for p in ps:
                            if p == p1 or p == p2 or p == p3 or p == p4:
                                continue
                            if min_x <= p[0] <= max_x and min_y <= p[1] <= max_y:
                                valid = False
                                break
                        if valid:
                            maxi = max(maxi, area)

        return maxi