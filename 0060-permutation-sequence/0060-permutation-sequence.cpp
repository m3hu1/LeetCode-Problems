// m3hu1
class Solution {
public:
    string getPermutation(int n, int k) {
        string check="";
        char c='1';k--;
        for(int i=0;i<n;i++)check+=c+i;
        while(k--)next_permutation(check.begin(),check.end());
        return check;
    }
};