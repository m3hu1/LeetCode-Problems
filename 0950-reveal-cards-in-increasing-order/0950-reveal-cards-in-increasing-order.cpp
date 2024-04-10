class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue <int> q;
        vector <int> ans(deck.size());
        for (int i = 0; i < deck.size(); i++) q.push(i);
        sort(deck.begin(), deck.end());
        for (auto card : deck) {
            ans[q.front()] = card;
            q.pop();
            if (!q.empty()) {
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};