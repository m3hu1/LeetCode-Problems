class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        ans = []
        cnt1 = Counter(arr1)
        cnt2 = set(arr2) # for faster checks
        temp = [] # for storing the left out elements

        for i in arr1:
            if i not in cnt2:
                temp.append(i)

        for i in arr2:
            for j in range(cnt1[i]):
                ans.append(i)

        return ans + sorted(temp)