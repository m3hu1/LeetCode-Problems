// m3hu1
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode*pos=head;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
              while(pos!=slow){
                slow=slow->next;
                pos=pos->next;
              }
              return pos;
            }
        }
        return NULL;
    }
};