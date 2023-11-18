// m3hu1
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector<int>vec;
        for(int i=0;i<n;i++)
            vec.push_back(gas[i]-cost[i]);

        if(accumulate(vec.begin(),vec.end(),0)<0)
        return -1;

        int x=0,ind=0;
        for(int i=0;i<n;i++){
         x+=vec[i];
         if(x<0){
            ind=i+1;
            x=0;
         }   
        }
        return ind;
    }
};