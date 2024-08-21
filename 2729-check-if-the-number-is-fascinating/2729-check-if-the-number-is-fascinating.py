class Solution:
    def isFascinating(self, n: int) -> bool:
        a = 2 * n
        b = 3 * n

        number = str(n) + str(a) + str(b)
        print(number)

        count = Counter(number)
        print(count)
        temp = set([str(i) for i in range(1, 10)])
        print(temp)

        for c in number:
            if c not in temp:
                return False
            if c in temp:
                if count[c] > 1:
                    return False
                elif count[c] == 0:
                    return False
                if count[c] == 1:
                    continue

        return True