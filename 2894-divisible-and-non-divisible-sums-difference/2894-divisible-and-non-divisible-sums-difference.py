class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        arr1 = [x for x in range(1, n + 1) if x % m]
        arr2 = [x for x in range(1, n + 1) if x % m == False]

        return sum(arr1) - sum(arr2)