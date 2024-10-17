class Solution:
    def maximumSwap(self, num: int) -> int:
        number = str(num)
        number = list(number)
        last = {int(d): i for i, d in enumerate(number)}
        
        @cache
        def helper(i, temp):
            if i == len(number):
                return int("".join(number))
            maxi = int("".join(number[i : ]))
            if temp == 0:
                curr = int(number[i])
                for d in range(9, curr, -1):
                    if d in last and last[d] > i:
                        number[i], number[last[d]] = number[last[d]], number[i]
                        maxi = max(maxi, helper(i + 1, 1))
                        number[i], number[last[d]] = number[last[d]], number[i]
            return max(maxi, helper(i + 1, temp))

        return helper(0, 0)