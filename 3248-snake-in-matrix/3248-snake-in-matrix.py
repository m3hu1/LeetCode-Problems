class Solution:
    def finalPositionOfSnake(self, n: int, commands: List[str]) -> int:
        ans = 0

        for c in commands:
            match c:
                case "DOWN":
                    ans += n
                case "UP":
                    ans -= n
                case "RIGHT":
                    ans += 1
                case "LEFT":
                    ans -= 1
        
        return ans   