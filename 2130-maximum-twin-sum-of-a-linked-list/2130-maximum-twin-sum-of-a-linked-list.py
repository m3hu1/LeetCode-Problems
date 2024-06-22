# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        stack = []
        new_head = ListNode(-1, head)
        slow = new_head
        fast = new_head

        while fast.next:
            fast = fast.next.next
            slow = slow.next
            stack.append(slow.val)
        
        ans = 0

        while slow.next:
            ans = max(ans, slow.next.val + stack.pop())
            slow = slow.next
        
        return ans