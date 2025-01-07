class Solution:
    def stringMatching(self, w: List[str]) -> List[str]: 
        temp, ans = "", []

        for word in w : 
            temp += word + " "

        for word in w : 
            if temp.count(word) > 1 : 
                ans.append(word) 
        
        return ans