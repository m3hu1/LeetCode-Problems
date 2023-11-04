// m3hu1
class Solution {
public:
    int tribonacci(int n) {
        int a[3] = {0,n>0,0};
        for(int i = 2; i < n; i++) a[i%3] = a[0] + a[1] + a[2];
        return a[0] + a[1] + a[2];
    }
};