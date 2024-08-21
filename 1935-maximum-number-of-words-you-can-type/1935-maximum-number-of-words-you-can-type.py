class Solution:
    def canBeTypedWords(self, text: str, bl: str) -> int:
        words = text.split(' ')
        bad = set(bl)
        cnt = 0
        # print(words)

        for word in words:
            check = True
            for c in word:
                if c in bad:
                    check = False
            if check:
                cnt += 1

        return cnt