// m3hu1
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> visited;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            visited[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(visited[nums[i]] == 1)
            return nums[i];
        }
        return 0;

    }
};