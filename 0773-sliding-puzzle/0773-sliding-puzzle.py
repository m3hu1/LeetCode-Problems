class Solution:
    def slidingPuzzle(self, board: List[List[int]]) -> int:
        pos = ((1,3),(0,2,4),(1,5),(0,4),(3,1,5),(2,4))
        q = deque()
        s = (*board[0],*board[1])
        q.append(s)
        cnt, SET = 0, set()
        
        while q:
            for _ in range(len(q)):
                ss = list(q.popleft())
                if ss == [1,2,3,4,5,0]:
                    return cnt
                curr = ss.index(0)
                for move in pos[curr]:
                    currss = ss.copy()
                    currss[curr], currss[move] = currss[move], 0
                    currss = tuple(currss)
                    if currss in SET:
                        continue
                    q.append(currss)
                    SET.add(currss)
            cnt += 1
        
        return -1