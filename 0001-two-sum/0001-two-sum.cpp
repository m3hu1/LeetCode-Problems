// m3hu1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> mpp;
	vector<int> ans;
    int n=nums.size();
	for (int i=0;i<n;i++)
	{
		int a=nums[i];
		int more= target-a;
		if (mpp.find(more) != mpp.end())
		{			
			ans.push_back( mpp[more]);
			ans.push_back(i);
			break;
		}
		mpp[a]=i;
	}
        return ans;
    }
};