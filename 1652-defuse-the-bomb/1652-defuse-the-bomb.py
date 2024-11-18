class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        if k == 0:
            return [0]*len(code)

        adjCode = code * 3

        if k > 0:
            for i in range(len(code)):
                code[i] = sum(adjCode[len(code) + i + 1 : len(code) + i + 1 + k])
        else:
            for j in range(len(code)):
                code[j] = sum(adjCode[len(code) + j + k : len(code) + j])

        return code