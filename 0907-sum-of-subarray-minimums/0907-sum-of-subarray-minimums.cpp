class Solution {
public:
    int sumSubarrayMins(vector<int>& nums) {
        int n=nums.size();
        vector<int> next(n,n);
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            while(s.size())
            {
                int index=s.top();
                if(nums[index]>=nums[i])
                {
                    next[index]=i;
                    s.pop();
                }
                else
                    break;
            }
            s.push(i);
        }
        int m=1e9+7;
        vector<long long> sum(n+1,0);
        for(int i=n-1;i>=0;i--)
        {
            int index=next[i];
            int len=index-i;
            sum[i]=(sum[i]+len*nums[i])%m;
            sum[i]=(sum[i]+sum[index])%m;
        }
        long long ans=0;
        for(auto x:sum)
            ans=(ans+x)%m;
        return ans;
    }
};