class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector <string> ans;
        string prev = "";
        for (auto i : words) {
            string curr = i;
            sort(curr.begin(), curr.end());
            if (curr != prev) {
                prev = curr;
                ans.push_back(i);
            }
        }
        return ans;
    }
};