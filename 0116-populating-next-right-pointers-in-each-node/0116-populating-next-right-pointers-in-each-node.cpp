/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node* r = root;
        while (root && root->left) {
            Node* next = root->left;
            while (root) {
                root->left->next = root->right;
                root->right->next = root->next ? root->next->left : nullptr;
                root = root->next;
            }
            root = next;
        }
        return r;
    }
};