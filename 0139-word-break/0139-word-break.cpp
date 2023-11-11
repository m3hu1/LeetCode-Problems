// m3hu1
struct Trienode {
    Trienode* child[26];
    bool isEnd;

    Trienode() {
        for(int i=0; i<26; i++) {
            child[i] = NULL;
        }
        isEnd = false;
    }
};

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        Trienode* root = new Trienode();
        for(string st: wordDict) {
            insert(st, root);
        }
        vector<int> dp(s.size(), -1);
        return search(root, s, 0, dp);
        
    }
    void insert(string s, Trienode* root) {
        Trienode* p = root;
        for(char c: s) {
            int pos = c-'a';
            if(p->child[pos] == NULL) {
                p->child[pos] = new Trienode();
            }
            p = p->child[pos];
        }
        p->isEnd = true;
    }
    bool search(Trienode* root, string s, int x, vector<int>& dp) {
        if(x >= s.size()) {
            return true;
        }
        if(dp[x] != -1) {
            return dp[x];
        }
        Trienode* p = root;
        for(int i=x; i<s.size(); i++) {
            int pos = s[i]-'a';
            if(p->child[pos] == NULL) {
                return false;
            }
            p = p->child[pos];
            if(p->isEnd && (i+1)<s.size()) {

                dp[i+1] = dp[i+1] != -1 ? dp[i+1] : search(root, s, i+1, dp);
                if(dp[i+1]) {
                    return true;
                }
            }
        }
        return dp[x] = p->isEnd ? 1: 0;
    }
};