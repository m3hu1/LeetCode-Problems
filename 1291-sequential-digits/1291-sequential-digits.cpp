class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string str = "123456789";
        int n = str.length();
        vector<int> ans;
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j <= n - i; j++) {
                string t = str.substr(j, i);
                int temp = stoi(t);
                if (temp >= low && temp <= high)
                    ans.push_back(temp);
            }
        }
        return ans;
    }
};