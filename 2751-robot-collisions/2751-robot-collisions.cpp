class Solution {
public:
    bool compare(int x, int y, vector<int>& pos) {
        return pos[x] < pos[y];
    }

    vector<int> survivedRobotsHealths(vector<int>& pos, vector<int>& healths, string dir) {
        stack <int> st;
        int num_of_robots = pos.size();
        vector <int> robots(num_of_robots);

        for (int i = 0; i < num_of_robots; i++) {
            robots[i] = i;
        }

        sort(robots.begin(), robots.end(), [&](int a, int b) {
            return compare(a, b, pos);
        });

        for (int idx : robots) {
            if (dir[idx] == 'R') {
                st.push(idx);
            } else {
                while (!st.empty() && healths[idx] > 0) {
                    int right = st.top();
                    if (healths[idx] < healths[right]) {
                        healths[idx] = 0;
                        healths[right] -= 1;
                    } else if (healths[idx] > healths[right]) {
                        healths[idx] -= 1;
                        healths[right] = 0;
                        st.pop();
                    } else {
                        healths[idx] = 0;
                        healths[right] = 0;
                        st.pop();
                    }
                }
            }
        }

        vector <int> ans;
        for (int health : healths) {
            if (health > 0) {
                ans.push_back(health);
            }
        }

        return ans;
    }
};