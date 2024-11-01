class Solution:
    def countOfSubstrings(self, word: str, k: int) -> int:
        vowels = ['a', 'e', 'i', 'o', 'u']
        cnt = 0

        for i in range(len(word) - k - 4):
            temp = []
            x = 0
            for j in range(i, len(word)):
                if word[j] in vowels:
                    temp.append(word[j])
                else:
                    x += 1
                if len(set(temp)) == 5 and k == x:
                    cnt += 1

        return cnt