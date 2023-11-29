# m3hu1
class Solution:
    def tictactoe(self, moves: List[List[int]]) -> str:
        board = [[0,0,0], [0,0,0], [0,0,0]]
        turn = 'A'
        for x in moves:
            if turn == 'A' and board[x[0]][x[1]] != 'B':
                board[x[0]][x[1]] = 'A'
                turn = 'B'
            elif turn == 'B' and board[x[0]][x[1]] != 'A':
                board[x[0]][x[1]] = 'B'
                turn = 'A'

        i = 0
        for s in range(len(board)):
            if board[s][0] == board[s][1] == board[s][2] == 'A':
                return 'A'
        if board[i][0] == board[i+1][0] == board[i+2][0] == 'A':
            return 'A'
        if board[i][1] == board[i+1][1] == board[i+2][1] == 'A':
            return 'A'
        if board[i][2] == board[i+1][2] == board[i+2][2] == 'A':
            return 'A'
        if board[i][0] == board[i+1][1] == board[i+2][2] == 'A':
            return 'A'
        if board[i][2] == board[i+1][1] == board[i+2][0] == 'A':
            return 'A'
        for s in range(len(board)):
            if board[s][0] == board[s][1] == board[s][2] == 'B':
                return 'B'
        if board[i][0] == board[i+1][0] == board[i+2][0] == 'B':
            return 'B'
        if board[i][1] == board[i+1][1] == board[i+2][1] == 'B':
            return 'B'
        if board[i][2] == board[i+1][2] == board[i+2][2] == 'B':
            return 'B'
        if board[i][0] == board[i+1][1] == board[i+2][2] == 'B':
            return 'B'
        if board[i][2] == board[i+1][1] == board[i+2][0] == 'B':
            return 'B'
        
        for x in board:
            if x.count(0) > 0:
                return 'Pending'
        return 'Draw'