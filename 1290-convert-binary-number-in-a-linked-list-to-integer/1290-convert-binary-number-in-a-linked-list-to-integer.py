# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        ans = 0

        while head:
            curr = head.val
            ans = 2 * ans + curr
            head = head.next
        
        return ans