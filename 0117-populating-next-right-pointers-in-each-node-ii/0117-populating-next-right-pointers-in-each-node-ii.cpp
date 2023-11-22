// m3hu1
class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue <Node*> Q;
        Q.push(root);

        while(!Q.empty()){
            int n = Q.size();

            for(int i = 0; i < n; i++){
                Node* temp = Q.front();
                Q.pop();
                if(i == n-1){
                    //cout<<temp->val<<endl;
                    temp->next = NULL;
                }
                else{
                    temp->next = Q.front();
                }
                if(temp->left){Q.push(temp->left);}   
                if(temp->right){Q.push(temp->right);}            
            }
        }

        return root;
    }
};