class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        new = sentence.split(" ")

        for idx, word in enumerate(new):
            if word.startswith(searchWord):
                return idx + 1

        return -1