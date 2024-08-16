class Solution:
    def countMatches(self, items: List[List[str]], rk: str, rv: str) -> int:
        cnt = 0
        
        for item in items:
            if ("type" == rk and rv == item[0]) or (rk == "color" and rv == item[1]) or (rk == "name" and rv == item[2]):
                cnt += 1
        
        return cnt