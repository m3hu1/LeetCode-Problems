class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        answer = [0] * n
        for i in reversed(range(n - 1)):
            j = i + 1
            while temperatures[i] >= temperatures[j]:
                if answer[j] == 0:
                    break
                j += answer[j]
            if temperatures[i] < temperatures[j]:
                answer[i] = j - i
        return answer