class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        pairs = list(zip(names, heights))
        sorted_pairs = sorted(pairs, key = lambda x: x[1], reverse = True)
        
        return [name for name, height in sorted_pairs]