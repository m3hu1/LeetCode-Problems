class Solution:
    def vowelStrings(self, words: List[str], q: List[List[int]]) -> List[int]:
        pSUM, ans = [0] * (len(words) + 1), []

        def check(w):
            v = 'aeiouAEIOU'
            return len(w) > 0 and w[0] in v and w[-1] in v

        for i in range(len(words)):
            pSUM[i + 1] = pSUM[i] + (1 if check(words[i]) else 0)

        for s, e in q:
            cnt = pSUM[e + 1] - pSUM[s]
            ans.append(cnt)

        return ans