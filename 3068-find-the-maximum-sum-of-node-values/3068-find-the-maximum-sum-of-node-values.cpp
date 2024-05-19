class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int num_nodes = nums.size();
        vector<vector<int>> adjacency(num_nodes);
        for (auto edge : edges) {
            adjacency[edge[0]].push_back(edge[1]);
            adjacency[edge[1]].push_back(edge[0]);
        }
        vector<int> inc_indices;
        for (int idx = 0; idx < num_nodes; ++idx) {
            int val = nums[idx] ^ k;
            if (val > nums[idx]) {
                inc_indices.push_back(idx);
            }
        }
        int inc_count = inc_indices.size();
        if (inc_count % 2 == 0) {
            long long total = accumulate(nums.begin(), nums.end(), 0LL);
            for (int idx : inc_indices) {
                total -= nums[idx];
                int add_val = nums[idx] ^ k;
                total += add_val;
            }
            return total;
        } else {
            long long total = accumulate(nums.begin(), nums.end(), 0LL);
            long long max_sum = total;
            for (int idx : inc_indices) {
                total -= nums[idx];
                int add_val = nums[idx] ^ k;
                total += add_val;
            }
            for (int idx = 0; idx < inc_count; ++idx) {
                int add_val = nums[inc_indices[idx]] ^ k;
                long long curr_sum = total - add_val + nums[inc_indices[idx]];
                max_sum = max(max_sum, curr_sum);
            }
            vector<int> visited(num_nodes, 0);
            for (int idx : inc_indices) {
                visited[idx] = 1;
            }
            for (int idx = 0; idx < num_nodes; ++idx) {
                if (visited[idx] == 0) {
                    int add_val = nums[idx] ^ k;
                    long long curr_sum = total - nums[idx] + add_val;
                    max_sum = max(max_sum, curr_sum);
                }
            }
            return max_sum;
        }
    }
};