// m3hu1
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        priority_queue< pair<int, pair<int,int>> >pq;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){

                int sum = nums1[i]+nums2[j];

                if(pq.size() < k){

                    pq.push({sum,{nums1[i],nums2[j]}});

                }
                else if(sum < pq.top().first){
                    pq.pop();
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                
                else{
                    break;
                }
                
            }
        } 
  
        vector<vector<int> >ans;

        while(! pq.empty()){
            int value1 = pq.top().second.first;
            int value2 = pq.top().second.second;

            ans.push_back({value1, value2});
            pq.pop();
        }
        reverse(ans.begin(), ans.end());

        // for(int i=0; i<v.size() ; i++){
        //     if(k == 0) break;
        //     int value = v[i].second.first;
        //     int value2 = v[i].second.second;
            
        //     ans.push_back({value,value2});
        //     k--;
        // }

        return ans;
    }
};