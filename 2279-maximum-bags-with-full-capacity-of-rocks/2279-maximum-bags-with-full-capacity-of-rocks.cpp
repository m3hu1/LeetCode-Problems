class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector <int> r(capacity.size());
        for (int i = 0; i < capacity.size(); i++) {
            r[i] = capacity[i] - rocks[i];
        }
        sort(r.begin(), r.end());
        int cnt = 0;
        for (int i = 0; i < capacity.size(); i++) {
            if (additionalRocks > 0) {
                cnt++;
                additionalRocks -= r[i];
                if (additionalRocks < 0) cnt--;
            }
        }
        return cnt;
    }
};