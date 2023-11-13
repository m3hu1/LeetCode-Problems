class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        curr = head
        holder = curr

        while curr:
            holder = curr.next
            curr.next = prev
            prev = curr
            curr = holder

        return prev