class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        unordered_set <float> st;
        vector <string> ans;
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                float temp1 = (float) i / j;
                string temp2 = to_string(i) + "/" + to_string(j);
                if (st.find(temp1) == st.end()) {
                    st.insert(temp1);
                    ans.push_back(temp2);
                }
            }
        }
        return ans;
    }
};