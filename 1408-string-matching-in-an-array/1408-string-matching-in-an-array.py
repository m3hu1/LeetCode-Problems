class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        ans = []

        for i in range(len(words)):
            for j in range(i, len(words)):
                if i != j and words[i] in words[j]:
                    ans.append(words[i])
                    break
            
        return ans