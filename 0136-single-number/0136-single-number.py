from collections import Counter
class Solution:
    def singleNumber(self, nums):
      a = dict(Counter(nums))
      b = [k for k, v in a.items() if v==1]
      return b[0]
	  