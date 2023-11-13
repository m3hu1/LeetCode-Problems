// m3hu1
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        int index=0;
        int sum1=0;
        int n=nums.size();
        vector<vector<int>>vcc(n,vector<int>(target+1,-1));
        return Parti(nums,index,target,vcc);
    }
    bool Parti(vector<int>& nums,int index,int target,vector<vector<int>>&vcc){
        if(index>=nums.size()){
            return false;
        }
        if(target==0){
            return true;
        }
        if(target<0){
            return false;
        }
        if(vcc[index][target]!=-1){
            return vcc[index][target];
        }
        bool f=Parti(nums,index+1,target,vcc);
        bool s=Parti(nums,index+1,target-nums[index],vcc);
        return vcc[index][target]=f||s;
    }
};