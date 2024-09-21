class SegmentTree:
    def __init__(self, size):
        self.size = size
        self.tree = [(0, 0)] * (2 * size)

    def merge(self, left, right):
        if left[0] > right[0]:
            return left
        if right[0] > left[0]:
            return right
        return (left[0], left[1] + right[1])

    def update(self, pos, value):
        pos += self.size
        self.tree[pos] = self.merge(self.tree[pos], value)
        while pos > 1:
            pos //= 2
            self.tree[pos] = self.merge(self.tree[2 * pos], self.tree[2 * pos + 1])

    def query(self, left, right):
        left += self.size
        right += self.size
        res = (0, 0)
        while left < right:
            if left % 2 == 1:
                res = self.merge(res, self.tree[left])
                left += 1
            if right % 2 == 1:
                right -= 1
                res = self.merge(res, self.tree[right])
            left //= 2
            right //= 2
        return res

class Solution:
    def findNumberOfLIS(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        idxmp = defaultdict(int)
        SET = sorted(set(nums))
        for i, v in enumerate(SET):
            idxmp[v] = i

        tree = SegmentTree(len(SET))

        for num in nums:
            idx = idxmp[num]
            l, cnt = tree.query(0, idx)
            tree.update(idx, (l + 1, max(cnt, 1)))

        maxi, ans = tree.query(0, len(SET))
        return ans