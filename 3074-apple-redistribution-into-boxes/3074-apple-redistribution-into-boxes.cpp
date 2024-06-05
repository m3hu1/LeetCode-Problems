class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& cap) {
        sort(cap.rbegin(), cap.rend());
        int cnt = 0;
        int storage = 0;
        int apples = accumulate(apple.begin(), apple.end(), 0);
        for (int c : cap) {
            cnt++;
            storage += c;
            if (storage >= apples) break;
        }
        return cnt;
    }
};