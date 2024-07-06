class Solution:
    def canConstruct(self, rm: str, mag: str) -> bool:
        r = Counter(rm)
        m = Counter(mag)
        
        return r <= m