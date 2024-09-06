# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def modifiedList(self, nums: List[int], head: Optional[ListNode]) -> Optional[ListNode]:
        SET = set(nums)

        while head and head.val in SET:
            head = head.next
            
        temp = head
        
        while temp.next:
            if temp.next.val in SET:
                temp.next = temp.next.next
            else:
                temp = temp.next
        
        return head