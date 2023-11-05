// m3hu1
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        long long high= *max_element(piles.begin(),piles.end());
        int ans=-1;
        while(low<=high){
            int mid= low+ (high-low)/2;
            long long totHrs= findHrs(piles, mid);
            if(totHrs<=h){
                ans=mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
    }
    long long findHrs(vector<int>piles, int mid){
        long long totHrs=0;
        int n= piles.size();
        for(int i=0;i<n;i++){
            totHrs+=ceil((double)piles[i]/(double)mid);
        }
        return totHrs;
    }
};