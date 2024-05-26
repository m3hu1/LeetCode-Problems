class Solution {
public:
    vector <int> ans;
    Solution(vector<int>& nums) {
        for (auto i : nums) ans.push_back(i);
    }
    
    int pick(int target) {
        int raand = 0;
        while(true) {
            raand = rand() % ans.size();
            if (ans[raand] == target) return raand;
        }
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */