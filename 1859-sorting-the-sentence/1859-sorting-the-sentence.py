class Solution:
    def sortSentence(self, s: str) -> str:
        word = s.split(" ")
        ans = [""] * (len(word))
        
        for w in word:
            idx = int(w[-1]) - 1
            ans[idx] = w[:-1]

        return ' '.join(ans)