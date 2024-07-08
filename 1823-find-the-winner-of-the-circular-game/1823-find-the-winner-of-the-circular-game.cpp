class Solution {
public:
    int findTheWinner(int n, int k) {
        // saare dosto ko daal do queue mein
        queue <int> q;
        for (int i = 1; i <= n; ++i) {
            q.push(i);
        }

        // ab all we need to do is keep removing the `k`th friend jab tak
        // we have one friend in the circle left

        while (q.size() != 1) { // looping until we have one dost remaining
            // `k - 1` friends ko add krte hain queue mein kyuki
            // we have to remove the `k`th friend
            for (int i = 0; i < k - 1; ++i) {
                // queue ke end mein daalte jaayenge hum har ek friend ko
                // so that `k`th friend queue ke front mein aa jaaye
                q.push(q.front()); 
                q.pop();
            }

            // and ab mai `k`th friend ko remove kr raha hu
            q.pop();
        }

        return q.front(); // last mein jo single dost bacha usko return kar diya
    }
};