// m3hu1
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums)
    {
        int size=nums.size();
        vector<int>res(size);
        int sum=0;
        for(int i=size-1;i>=0;i--)
        {
            res[i]=sum-(nums[i]*(size-(i+1)));
            sum+=nums[i];
        }   
        sum=0; 
        for(int i=0;i<size;i++)
        {
            res[i]=abs((sum-(nums[i]*i)))+res[i];
            sum+=nums[i];
        }
        return res;   
    }
};