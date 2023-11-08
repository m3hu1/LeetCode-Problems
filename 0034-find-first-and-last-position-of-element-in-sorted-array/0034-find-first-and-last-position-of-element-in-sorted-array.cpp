// m3hu1
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr = {-1,-1};
        if(binary_search(nums.begin(), nums.end(), target) == 0){
            return arr;
        }
        int first = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        int last = upper_bound(nums.begin(), nums.end(), target)-nums.begin();
        arr[0] = first;
        arr[1] = last-1;
        return arr;
    }
};