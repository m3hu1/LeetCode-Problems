class Solution:
    def passThePillow(self, n: int, time: int) -> int:
        cycle = (time - 1) // (n - 1)
        position = (time - 1) % (n - 1)

        if cycle % 2 != 0:
            return n - position - 1
        
        return position + 