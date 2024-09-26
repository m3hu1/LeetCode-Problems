class Solution:
    def isPrefixString(self, s: str, words: List[str]) -> bool:
        string = []

        for word in words:
            string.append(word)
            if len(string) >= len(s):
                break
        
        return "".join(string).startswith(s)