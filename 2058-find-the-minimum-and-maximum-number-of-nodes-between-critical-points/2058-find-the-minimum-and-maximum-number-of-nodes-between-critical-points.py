class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        a, b, c = head, head.next, head.next.next
        first, last, min_dist = -1, -1, float('inf')
        prev = -1
        i = 1

        while c:
            if (a.va < b.val > c.val) or (a.val > b.val < c.val):
                if first == -1:
                    first = i
                last = i
                if prev != -1:
                    min_dist = min(min_dist, i - prev)
                prev = i
            a, b, c = b, c, c.next
            i += 1

        if first == last:
            return [-1, -1]

        return [min_dist, last - first]
