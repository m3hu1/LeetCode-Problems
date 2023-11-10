// m3hu1
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode* a=headA;
        ListNode* b=headB;
        while(a!=b){
            if(a==NULL) a=headB;
            else a=a->next;
            if(b==NULL) b=headA;
            else b=b->next;
        }
        return a;
    }
};