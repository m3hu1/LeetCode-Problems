class Solution:
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
        def ipas(str1, str2):
            if str2.startswith(str1) and str2.endswith(str1):
                return True
                
        ans = 0
        
        for i in range(len(words)):
            for j in range(i + 1, len(words)):
                if ipas(words[i], words[j]):
                    ans += 1
            
        return ans