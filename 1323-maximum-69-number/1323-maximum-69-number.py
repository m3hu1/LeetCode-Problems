class Solution:
    def maximum69Number (self, num: int) -> int:
        number = []

        while num:
            number.append(num % 10)
            num = num // 10
        
        number.reverse()

        for i in range(len(number)):
            if number[i] == 6:
                number[i] = 9
                break
        
        ans = number[0]

        for idx, n in enumerate(number):
            if idx == 0:
                continue
            ans = ans * 10 + n
        
        return ans