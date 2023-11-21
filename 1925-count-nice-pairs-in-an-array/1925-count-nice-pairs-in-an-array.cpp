// m3hu1
class Solution {
public:
    int mod=1e9+7;
    int countNicePairs(vector<int>& nums) {
        map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            int ele=nums[i];
            int rev=0;
            while(ele!=0){
                int digit=ele%10;
                rev= rev*10+digit;
                ele/=10;
            }
            mp[nums[i]-rev]++;
        }
        long long ans=0;
        for(auto a: mp){
            long long cnt=a.second;
            if(cnt>1){
                ans= (ans+(cnt*(cnt-1))/2)%mod;
            }
        }
        return ans;
    }
};