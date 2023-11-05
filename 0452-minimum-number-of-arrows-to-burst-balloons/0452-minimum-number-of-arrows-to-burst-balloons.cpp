// m3hu1
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<pair<int,int>> v;
        for(int i =0 ; i< points.size() ; i++){
            v.push_back(make_pair(points[i][1] ,points[i][0] ));
        }
        sort(v.begin() , v.end());
        int prev = 0;
        int res = 1;

        for(int i = 1 ; i< v.size() ; i++ ){
            if(v[i].second > v[prev].first){
                res++;
                prev = i;
            }
        }
        return res;
    }
};