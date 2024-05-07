/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int helper(ListNode* head) {
        if (!head) return 0;
        int c = helper(head->next);
        int val = c + head->val * 2;
        head->val = val % 10;
        return val / 10;
    }
    
    ListNode* doubleIt(ListNode* head) {
        int c = helper(head);
        if (c) {
            ListNode* newHead = new ListNode(c);
            newHead->next = head;
            return newHead;
        }
        return head;
    }
};