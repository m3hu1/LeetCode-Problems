// m3hu1
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n == 1) return 0;
        sort(intervals.begin(),intervals.end());
        int end = intervals[0][1];
        int cnt = 0;
        for(int i=1; i<n; i++){
            if(intervals[i][0] < end){
                cnt++;
                end = min(end,intervals[i][1]);
            }
            else{
                end = intervals[i][1];
            }
        }
        return cnt;
    }
};