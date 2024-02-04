class Solution {
public:
    int findMaxRow(vector<vector<int>>& mat, int r, int mid) {
        int temp = -1;
        int ind = -1;
        for(int i=0;i<r;i++) {
            if(mat[i][mid] > temp) {
                temp = mat[i][mid];
                ind = i;
            }
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int low = 0;
        int high = c - 1;
        int left;
        int right;
        while(low <= high) {
            int mid = (low + high) / 2;
            int maxE = findMaxRow(mat, r, mid);
            if(mid - 1 >= 0) {
                left = mat[maxE][mid-1];
            } else left = -1;
            if(mid + 1 < c) {
                right = mat[maxE][mid+1];
            } else right = -1;
            if(mat[maxE][mid] > left && mat[maxE][mid] > right) {
                return {maxE, mid};
            } else if(mat[maxE][mid] > left) {
                low = mid + 1;
            } else high = mid - 1;
        }
        return {-1,-1};
    }
};