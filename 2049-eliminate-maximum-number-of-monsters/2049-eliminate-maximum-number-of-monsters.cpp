// m3hu1
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        priority_queue<float,vector<float>,greater<float>>pq;
        for(int i = 0; i < dist.size(); i++){
            pq.push((float)(dist[i])/speed[i]);
        }
        int ready = 0;
        int ans = 0;
        int n = pq.size();
        for(int i = 0; i < n; i++){
            float temp = pq.top();
            pq.pop();
            if(ready < temp){
                ready++;
                ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};