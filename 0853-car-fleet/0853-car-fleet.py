class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        stack = []

        for pos, speed in sorted(zip(position, speed), reverse = True):
            eta = (target - pos) / speed
            if not stack or eta > stack[-1]:
                stack.append(eta)

        return len(stack)