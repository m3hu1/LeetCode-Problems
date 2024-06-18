class Solution:
    def maximumPrimeDifference(self, nums: List[int]) -> int:
        def isPrime(num):
            if num < 2:
                return False
            
            for i in range(2, int(sqrt(num)) + 1):
                if num % i == 0:
                    return False

            return True
        
        prime_idx = []

        for i in range(len(nums)):
            if isPrime(nums[i]):
                prime_idx.append(i)

        return prime_idx[len(prime_idx) - 1] - prime_idx[0]
