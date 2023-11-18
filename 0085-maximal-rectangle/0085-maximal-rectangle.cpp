// m3hu1
class Solution {
public:
    int calculate(vector<int>& v)
    {
        int n = v.size(), ans = 0;
        stack<pair<int,int>> s;
        s.push({v[0], 0});

        for(int i = 1; i < n; i++)
        {
            int j = i;
            while(s.size() > 0 && s.top().first >= v[i])
            {
                auto [a,b] = s.top();
                int l = (i - b)*a;
                ans = max(ans, l);
                j = b;
                s.pop();
            }
            s.push({v[i], j});
        }

        while(s.size() > 0)
        {
            auto [a,b] = s.top();
            int l = (n - b)*a;
            ans = max(ans, l);
            s.pop();
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> height(n, 0);

        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == '1')
                {
                    height[j] += 1;
                }
                else
                    height[j] = 0;
            }
            ans = max(ans, calculate(height));
        }
        return ans;
    }
};