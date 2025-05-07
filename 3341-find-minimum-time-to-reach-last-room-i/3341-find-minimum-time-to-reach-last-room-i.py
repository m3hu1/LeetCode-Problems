class Solution:
    def minTimeToReach(self, moveTime: List[List[int]]) -> int:
        target_row = len(moveTime) - 1
        target_col = len(moveTime[0]) - 1
        pq = [(0, 0, 0)]
        visited = set()

        while pq:
            time, row, col = heapq.heappop(pq)
            if row == target_row and col == target_col:
                return time

            if (row, col) in visited:
                continue
            visited.add((row, col))

            for next_row, next_col in (
                (row - 1, col),
                (row + 1, col),
                (row, col - 1),
                (row, col + 1),
            ):
                if (
                    next_row < 0
                    or next_row >= len(moveTime)
                    or next_col < 0
                    or next_col >= len(moveTime[0])
                ):
                    continue
                if (next_row, next_col) in visited:
                    continue

                heapq.heappush(
                    pq,
                    (
                        max(time + 1, moveTime[next_row][next_col] + 1),
                        next_row,
                        next_col,
                    ),
                )

        return -1