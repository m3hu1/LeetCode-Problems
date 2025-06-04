class Solution(object):
    def answerString(self, w, nf):
        if nf == 1:
            return w

        ans = ""
        l = len(w) - nf + 1
        maxi = max(w)

        for i in range(len(w)):
            if w[i] == maxi:
                substr = w[i:i + l]
                ans = max(ans, substr)

        return ans