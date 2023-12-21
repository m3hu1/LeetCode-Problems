class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int area, max=0;
        for(int i=0;i<points.size()-1;i++){
               area = sqrt(pow(points[i][0] - points[i + 1][0], 2));
                if (max<area){
                    max=area;
                }
        }
        return max;
    }
};