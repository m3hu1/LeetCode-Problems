// m3hu1
class Solution {
public:
    static bool cmp(pair<int, int>& a,pair<int, int>& b) 
    { 
        return a.second > b.second; 
    } 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> A;
        for(auto it : mp){
            A.push_back(it);
        }
        sort(A.begin(),A.end(),cmp);
        int count = 0;
        for(auto it : A){
            if(count == k){
                break;
            }
            else {
                ans.push_back(it.first);
                count++;
            }
        }
        return ans;
    }
};