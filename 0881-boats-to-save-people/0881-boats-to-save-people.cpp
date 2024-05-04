class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int low = 0;
        int high = people.size() - 1;
        int ans = 0;
        while (low <= high) {
            ans++;
            int x = limit - people[high];
            high--;
            if (low <= high && x >= people[low]) low++;
        }
        return ans;
    }
};