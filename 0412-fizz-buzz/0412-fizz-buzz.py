class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        ans = [""] * n

        for i in range(1, n + 1):
            if i % 3 == 0 and i % 5 == 0:
                ans[i - 1] = "FizzBuzz"
            elif i % 3 == 0:
                ans[i - 1] = "Fizz"
            elif i % 5 == 0:
                ans[i - 1] = "Buzz"
            else:
                ans[i - 1] = str(i)
        
        return ans