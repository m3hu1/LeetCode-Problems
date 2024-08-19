class Solution:
    def accountBalanceAfterPurchase(self, pa: int) -> int:
        return 100 - math.floor((pa + 5) / 10) * 10