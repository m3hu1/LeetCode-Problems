// m3hu1
class Solution {
    #define M 1000000007
public:
    int countHomogenous(string s) {
        int i=0, j=0, n=s.length(), res = 0;
        while(i < n){
            if(j == n || s[i] != s[j]){
                long long len = j-i;
                long long sum = (len * (len+1)) / 2;
                res = (res + sum) % M;
                i = j;
            }
            else j++;
        }
        return res;
    }
};