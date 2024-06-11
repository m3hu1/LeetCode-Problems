class Solution:
    def isValidSudoku(self, b: List[List[str]]) -> bool:
        rows = defaultdict(set)
        cols = defaultdict(set)
        sub_boxes = defaultdict(set)

        for i in range(9):
            for j in range(9):
                if b[i][j] == '.':
                    continue
                if (
                    b[i][j] in rows[i] or
                    b[i][j] in cols[j] or
                    b[i][j] in sub_boxes[(i // 3, j // 3)]
                ):
                    return False

                rows[i].add(b[i][j])
                cols[j].add(b[i][j])
                sub_boxes[(i // 3, j // 3)].add(b[i][j])
                
        return True