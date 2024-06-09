class Solution {
public:
    int numberOfChild(int n, int k) {
        int cycle = 2 * (n - 1); // total cycle time 
        int Teff = k % cycle; // effective time
        if (Teff < n) return Teff; // right dir
        return cycle - Teff; // left dir
    }
};