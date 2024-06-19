class Solution:
    def kSmallestPairs(self, nums1: List[int], nums2: List[int], k: int) -> List[List[int]]:
        q = []

        for i in range(len(nums1)):
            q.append([nums1[i] + nums2[0], i, 0])
        
        heapq.heapify(q)

        ans = []

        for i in range(k):
            _, a, b = heapq.heappop(q)
            ans.append([nums1[a], nums2[b]])
            if b < len(nums2) - 1:
                heapq.heappush(q, [nums1[a] + nums2[b + 1], a, b + 1])
            
        return ans