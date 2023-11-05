// m3hu1
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long ans=0;
        priority_queue<int,vector<int>,greater<int>> left,right;
        int i=0, j=costs.size()-1;
        for(int x=0; x<candidates; x++){
            if(i<=j)    left.push(costs[i++]);
            if(i<=j)    right.push(costs[j--]);
            else break;
        } 
        while(k--){
            if(right.empty() or (!left.empty() and left.top()<=right.top())){
                ans += left.top();
                left.pop();
                if(i<=j) left.push(costs[i++]);
            }
            else{
                ans += right.top();
                right.pop();
                if(i<=j) right.push(costs[j--]);
            }
        }
        return ans;
    }
};