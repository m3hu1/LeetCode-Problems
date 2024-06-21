class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        l1 = defaultdict(int)

        for idx, string in enumerate(list1):
            l1[string] = idx

        ans = {}

        for idx, string in enumerate(list2):
            if string in l1:
                ans[string] = idx + l1[string]
        
        min_idx = float('inf')

        for string, idx in ans.items():
            min_idx = min(min_idx, idx)
        
        return [i for i in ans if ans[i] == min_idx]