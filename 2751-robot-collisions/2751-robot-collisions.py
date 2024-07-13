class Solution:
    def survivedRobotsHealths(self, pos: List[int], healths: List[int], directions: str) -> List[int]:
        stack = []
        num_of_robots = len(pos)
        robots = [i for i in range(num_of_robots)]

        robots.sort(key = lambda x: pos[x])

        for i in robots:
            if directions[i] == 'R':
                stack.append(i)
            else:
                while stack and healths[i] > 0:
                    top = stack[-1]
                    if healths[i] > healths[top]:
                        healths[i] -= 1
                        healths[top] = 0
                        stack.pop()
                    elif healths[i] < healths[top]:
                        healths[i] = 0
                        healths[top] -= 1
                    else:
                        healths[i] = 0
                        healths[top] = 0
                        stack.pop()

        return [health for health in healths if health]