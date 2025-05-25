class Solution:
    def longestPalindrome(self, words: List[str]) -> int:
        mp = defaultdict(int)
        ans = 0
        for i in range(0,len(words)):
            s = ''.join(words[i])
            rev = s[::-1]
            if mp[rev] > 0:
                ans += 4
                mp[rev] -= 1
            else:
                mp[words[i]] += 1
        
        for word in mp:
            if word[0] == word[1] and mp[word] > 0:
                ans += 2
                break
        
        return ans