class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <string> ans;
        int temp = 0;
        int curr = 1;

        while (curr <= n && temp < target.size()) {
            if (curr == target[temp]) {
                temp += 1;
                curr += 1;
                ans.push_back("Push");
            } else if (curr < target[temp]) {
                curr += 1;
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};