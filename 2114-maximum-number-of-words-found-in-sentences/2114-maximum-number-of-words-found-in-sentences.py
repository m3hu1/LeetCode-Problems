class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        maxi = 0
        
        for sen in sentences:
            word = sen.split(" ")
            if len(word) > maxi:
                maxi = len(word)
        
        return maxi