class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        vis = set()

        for c in sentence:
            vis.add(c)
        
        return len(vis) == 26