// m3hu1
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* dummy = new ListNode(-1);
    ListNode* t1 = dummy;
    int cry = 0;
    while (l1 || l2 || cry) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + cry;
        cry = sum / 10;
        sum %= 10;
        t1->next = new ListNode(sum);
        t1 = t1->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    return dummy->next;
    }
};