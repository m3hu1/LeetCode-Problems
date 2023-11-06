// m3hu1
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       list<int> l;
        vector<int> ans;
    int i=0;
    for(int j=0;j<nums.size();j++){
        while(l.size()>0 && l.back()<nums[j]){
            l.pop_back();
        }
l.push_back(nums[j]);
if(j-i+1==k){
    ans.push_back(l.front());

    if(nums[i]==l.front()){
        l.pop_front();
    }
    i++;
}
    }
    return ans;
    }
};