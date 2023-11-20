// m3hu1
class Solution {
    
    public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* node1 = new ListNode(-1); //dummy LL1
        ListNode* node2 = new ListNode(-1); //dummy LL2
        ListNode* p1 = node1; // pointer to node1
        ListNode* p2 = node2; // pointer to node2

        ListNode* temp = head;
        while(temp != NULL) {
            if(temp->val < x) {
                p1->next = temp;
                p1 = p1->next;
            }
            else {
                p2->next = temp;
                p2 = p2->next;
            }

            temp = temp->next;
        }

        p1->next = node2->next;
        p2->next = NULL;

        return node1->next;
    }
};