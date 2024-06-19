class Solution:
    def diagonalPrime(self, nums: List[List[int]]) -> int:
        def isPrime(num):
            if num < 2:
                return False
            for i in range(2, int(sqrt(num)) + 1):
                if num % i == 0:
                    return False
            return True
        
        max_prime = 0

        for i in range(len(nums)):
            val1 = nums[i][i]
            val2 = nums[i][len(nums) - i - 1]
            if val1 > max_prime and isPrime(val1):
                max_prime = max(max_prime, val1)
            if val2 > max_prime and isPrime(val2):
                max_prime = max(max_prime, val2)
        
        return max_prime