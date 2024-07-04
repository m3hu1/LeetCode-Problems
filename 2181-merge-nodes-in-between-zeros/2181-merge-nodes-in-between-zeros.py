# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp = head
        
        while temp:
            if temp.next and temp.next.val != 0:
                temp.val += temp.next.val
                temp.next = temp.next.next
            if temp.next and temp.next.val == 0:
                temp.next = temp.next.next
                temp = temp.next
        
        return head