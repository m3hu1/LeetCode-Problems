class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        n = len(s)
        count = Counter(s)
        print(count[letter])

        return int((count[letter] / n) * 100)