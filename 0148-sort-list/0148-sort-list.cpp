// m3hu1
class Solution {
    ListNode* merge(ListNode* sortedLeft, ListNode* sortedRight) {
        if (sortedLeft == nullptr) {
            return sortedRight;
        }
        if (sortedRight == nullptr) {
            return sortedLeft;
        }
        if (sortedLeft->val <= sortedRight->val) {
            sortedLeft->next = merge(sortedLeft->next, sortedRight);
            return sortedLeft;
        }
        sortedRight->next = merge(sortedLeft, sortedRight->next);
        return sortedRight;        
    }

    ListNode* mergeSort(ListNode* node) {
        if (node == nullptr || node->next == nullptr) {
            return node;
        }
        ListNode* slow = node;
        ListNode* fast = node->next;
        while (fast != nullptr) {
            fast = fast->next;
            if (fast != nullptr) {
                fast = fast->next;
                slow = slow->next;
            }
        }
        ListNode* next = slow->next;
        slow->next = nullptr;

        ListNode* sortedLeft = mergeSort(node);
        ListNode* sortedRight = mergeSort(next);
        return merge(sortedLeft, sortedRight);
    }
public:
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};