class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        for (int i = 0; i < tickets.size(); i++) {
            if (i > k) ans += min(tickets[i], tickets[k] - 1);
            else ans += min(tickets[i], tickets[k]);
        }
        return ans;
    }
};