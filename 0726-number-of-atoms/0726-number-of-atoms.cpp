class Solution {
public:
    string countOfAtoms(string f) {
        stack<int> stk;
        stk.push(1);
        map <string, int> mp;
        int i = f.size() - 1;

        while (i >= 0) {
            string temp = "";
            while (i >= 0 && isdigit(f[i])) {
                temp = f[i] + temp;
                i--;
            }
            int digit = temp.empty() ? 0 : stoi(temp);
            if (i >= 0 && f[i] == ')') {
                i--;
                stk.push(stk.top() * max(1, digit));
            } else if (i >= 0 && f[i] == '(') {
                i--;
                stk.pop();
            } else {
                string curr = "";
                while (i >= 0 && islower(f[i])) {
                    curr = f[i] + curr;
                    i--;
                }
                if (i >= 0 && isupper(f[i])) {
                    curr = f[i] + curr;
                    i--;
                }
                mp[curr] += stk.top() * max(1, digit);
            }
        }

        string ans = "";
        
        for (auto p : mp) {
            ans += p.first;
            if (p.second != 1) {
                ans += to_string(p.second);
            }
        }

        return ans;
    }
};
