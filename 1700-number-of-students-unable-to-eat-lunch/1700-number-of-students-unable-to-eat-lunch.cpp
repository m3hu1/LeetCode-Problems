class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        unordered_map <int, int> mp;
        for (auto stu : students) mp[stu]++;
        int ans = sandwiches.size();
        for (auto sw : sandwiches) {
            if (mp[sw] > 0) {
                ans--;
                mp[sw]--;
            } else return ans;
        }
        return ans;
    }
};