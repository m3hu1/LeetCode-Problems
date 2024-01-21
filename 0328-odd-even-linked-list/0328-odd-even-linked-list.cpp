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

#include <vector>
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // if(head==nullptr) return nullptr;
        // vector<int> arr;
        // ListNode* temp = head;
        // while(temp!=NULL&&temp->next!=NULL){
        //     arr.push_back(temp->val);
        //     temp = temp->next->next;
        // }
        // if(temp){
        //     arr.push_back(temp->val);
        // }
        // ListNode* temp2 = head->next;
        // while(temp2!=NULL&&temp2->next!=NULL){
        //     arr.push_back(temp2->val);
        //     temp2 = temp2->next->next;
        // }
        // if(temp2){
        //     arr.push_back(temp2->val);
        // }
        // int i = 0;
        // ListNode* temp3 = head;
        // while(temp3!=NULL){
        //     temp3->val = arr[i];
        //     i++;
        //     temp3 = temp3->next;
        // }
        // return head;

        if(head==nullptr||head->next==nullptr) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = head->next;
        while(even!=NULL&&even->next!=NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};