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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        while (temp) {
            if (temp->next && temp->next->val != 0) {
                temp->val += temp->next->val;
                temp->next = temp->next->next;
            }
            if (temp->next && temp->next->val == 0) {
                temp->next = temp->next->next;
                temp = temp->next;
            }
        }
        return head;
    }
};