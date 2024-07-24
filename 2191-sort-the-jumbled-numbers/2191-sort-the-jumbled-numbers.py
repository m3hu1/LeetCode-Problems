class Solution:
    def sortJumbled(self, m: List[int], nums: List[int]) -> List[int]:
        def compare(num):
            ans = 0
            for char in str(num):
                ans += m[int(char)]
                ans = ans * 10
            return 
        
        nums.sort(key = lambda x: compare(x))

        return nums