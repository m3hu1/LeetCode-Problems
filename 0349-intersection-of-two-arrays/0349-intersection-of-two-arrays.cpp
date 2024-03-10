class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto i : nums1) {
            mp[i]++;
        }
        for(auto i : nums2) {
            if(mp.find(i) != mp.end()) { // num found in hashmap
                ans.push_back(i); // store in ans vector
                mp.erase(i); // remove the num from hashmap
            }
        }
        return ans;
    }
};