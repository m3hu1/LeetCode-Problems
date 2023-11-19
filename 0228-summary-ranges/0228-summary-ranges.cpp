// m3hu1
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        
        if (nums.empty()) {
            return result;
        }
        
        int start = nums[0];
        int end = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == end + 1) {
                end = nums[i];
            } else {
                if (start == end) {
                    result.push_back(to_string(start));
                } else {
                    result.push_back(to_string(start) + "->" + to_string(end));
                }
                start = end = nums[i];
            }
        }
        
        if (start == end) {
            result.push_back(to_string(start));
        } else {
            result.push_back(to_string(start) + "->" + to_string(end));
        }
        
        return result;
    }
};