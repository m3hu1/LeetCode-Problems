class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        return [sum(code[(i + x + 1) % len(code)] if k >= 0 else code[(i - x - 1) % len(code)] for x in range(abs(k))) for i in range(len(code))]