class Solution {
public:
    int ans = 0;
    bool check(vector<int> &v){
        for(auto &i: v)
        if(i>1)return false;
    return true;
    }
    void solve(int s,vector<string> &arr,vector<int> &v,int k){
        ans = max(ans,k);
        if(s>=arr.size())return;
        vector<int> tmp = v;
        for(auto &i: arr[s]){
            tmp[i-'a']++;
        }
        if(check(tmp))
            solve(s+1,arr,tmp,k+arr[s].length());
        solve(s+1,arr,v,k);
    }
    int maxLength(vector<string>& arr) {
        vector<int> v(26,0);
        solve(0,arr,v,0);
        return ans;
    }
};