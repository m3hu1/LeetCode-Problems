class Solution:
    def rotateTheBox(self, box: List[List[str]]) -> List[List[str]]:
        for r in range(len(box)):
            for c in reversed(range(len(box[0]))):
                if box[r][c] == '.':
                    x = c
                    while x:
                        if box[r][x - 1] == '#':
                            x -= 1
                            break
                        elif box[r][x - 1] == '.':
                            x -= 1
                        else:
                            break
                    box[r][c], box[r][x] = box[r][x], box[r][c]
        
        return [[box[r][c] for r in range(len(box) - 1, -1, -1)] for c in range(len(box[0]))