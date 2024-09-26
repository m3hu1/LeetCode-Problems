class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        words = s.split(' ')
        ans = []
        cnt = 0

        for word in words:
            cnt += 1
            ans.append(word)
            if cnt == k:
                break
            
        return ' '.join(ans)