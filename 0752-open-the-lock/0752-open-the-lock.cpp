class Solution {
public:
    vector <string> getChildren(string curr) { // to get all the options
        vector <string> ans;
        for (int i = 0; i < 4; i++) {
            string temp = curr;
            if (curr[i] == '9') temp[i] = '0';
            else temp[i] = curr[i] + 1;
            ans.push_back(temp);
            if (curr[i] == '0') temp[i] = '9';
            else temp[i] = curr[i] - 1;
            ans.push_back(temp);
        }
        return ans;
    }

    int openLock(vector<string>& deadends, string target) {
        queue <string> q;
        q.push("0000"); // starting pos
        unordered_map <string, bool> vis;
        vis["0000"] = true;
        unordered_set <string> dSet(deadends.begin(), deadends.end()); // for O(1) checks
        int level = 0; // number of turns
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                string curr = q.front();
                q.pop();
                if (curr == target) return level;
                if (dSet.find(curr) != dSet.end()) continue;
                vector <string> children = getChildren(curr);
                for (auto child : children) {
                    if (vis[child] == false) {
                        q.push(child);
                        vis[child] = true;
                    }
                }
            }
            level++;
        }
        return -1;
    }
};