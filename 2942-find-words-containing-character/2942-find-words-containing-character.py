class Solution:
    def findWordsContaining(self, ws: List[str], x: str) -> List[int]:
        ans = []

        for i, w in enumerate(ws):
            if x in w:
                ans.append(i)

        return ans