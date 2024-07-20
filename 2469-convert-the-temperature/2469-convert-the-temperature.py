class Solution:
    def convertTemperature(self, c: float) -> List[float]:
        return [c + 273.15, c * 1.80 + 32.00]