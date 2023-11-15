// m3hu1
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,bool> visited;
        unordered_map<int,int> map;
        bool ans = false;

        for(int i=0;i<nums.size();i++){
            if(!visited[nums[i]]){
                visited[nums[i]]=true;
                map[nums[i]]=i;
            }else{
                int target = i-map[nums[i]];
                map[nums[i]]=i;
                if(target<=k){
                    ans = true;
                }
            }
        }
        return ans;
    }
};