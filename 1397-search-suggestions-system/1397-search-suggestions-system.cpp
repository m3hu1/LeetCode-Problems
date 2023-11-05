// m3hu1
class Solution {
public:
    class Node{
        public:
        Node *links[26];
        bool isEnd;
        vector<string> PreInd;
    };
    class Trie{
        public:
        Node * root;
        
        Trie(){
            root=new Node();
        }
        void insert(string word){
            Node* temp=root;
            for(int i=0;i<word.length();i++){
                if(temp->links[word[i]-'a']==NULL){
                    temp->links[word[i]-'a']=new Node();
                }
                temp=temp->links[word[i]-'a'];
                temp->PreInd.push_back(word);
            }
            temp->isEnd=true;
        }
        vector<string> Pre(string ch){
            Node* temp=root;
            for(int i=0;i<ch.length();i++){
                if(temp->links[ch[i]-'a']==NULL){
                    vector<string> d;
                    return d ;
                }
                temp=temp->links[ch[i]-'a'];
            }
            if(temp->PreInd.size()<=3)return temp->PreInd;
            else {
                vector<string> ans;
                for(int i=0;i<3;i++){
                    ans.push_back(temp->PreInd[i]);
                }
                return ans;
            }
        }
    };
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        Trie t;
        sort(products.begin(),products.end());
        vector<vector<string>> ans;
        for(int i=0;i<products.size();i++){
            t.insert(products[i]);
        }
        string k="";
        for(int i=0;i<searchWord.size();i++){
            k+=searchWord[i];
            vector<string> temp=t.Pre(k);
            ans.push_back(temp);
        }
        return ans;
    }
};