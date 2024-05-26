class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector <int> temp;
        vector <int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) temp.push_back(i);
        }
        for (auto i : queries) {
            if (i - 1 < temp.size()) ans.push_back(temp[i - 1]);
            else ans.push_back(-1);
        }
        return ans;
    }
};