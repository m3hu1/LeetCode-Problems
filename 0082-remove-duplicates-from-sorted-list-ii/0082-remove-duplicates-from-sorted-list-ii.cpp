// m3hu1
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* a=new ListNode(0);
        ListNode* b=head;
        ListNode* c=head->next;
        head=a;
        head->next=b;

        while(c!=NULL){
            if(b->val==c->val){
                a->next=c->next;
                b->next=NULL;
                c->next=NULL;
                c=a->next;
            }
            else if(b->next==NULL){
                b=c;
                c=c->next;
            }
            else{
                a=b;
                b=c;
                c=c->next;
            }
        }

        return head->next;
    }
};