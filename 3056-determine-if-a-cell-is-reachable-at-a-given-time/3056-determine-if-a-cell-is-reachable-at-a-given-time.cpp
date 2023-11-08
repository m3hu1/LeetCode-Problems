// m3hu1
class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int m = max(abs(sx-fx),abs(sy-fy));
        if(m==0 && t==1) return false;
        return m<=t;
    }
};