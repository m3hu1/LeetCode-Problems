class Solution:
    def robotSim(self, cs: List[int], o: List[List[int]]) -> int:
        # SET = set(o)
        SET = {(x, y) for x, y in o}
        dirs = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        # q = deque()
        q = deque([(0, 0, 0)])
        ans = 0

        for c in cs:
            # temp = []
            temp = deque()
            while q:
                # curr = q.popleft()
                x, y, d = q.popleft()
                if c == -2:
                    # newd = (d + 1) % 4
                    newd = (d - 1) % 4
                    temp.append((x, y, newd))
                elif c == -1:
                    newd = (d + 1) % 4
                    temp.append((x, y, newd))
                else:
                    for _ in range(c):
                        dx = x + dirs[d][0]
                        dy = y + dirs[d][1]
                        if (dx, dy) not in SET:
                            x, y = dx, dy
                            ans = max(ans, x * x + y * y)
                        else:
                            # continue
                            break
                    temp.append((x, y, d))
            # q = deque()
            # q.append(temp)
            q = temp
        
        return ans