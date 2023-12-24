class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int temp=0;
        for(int i=0;i<n;i++){
            if((i&1)&&!(s[i]-'0'))temp++;
            if(!(i&1)&&(s[i]-'0'))temp++;
        }
        return min(temp,(n-temp));
    }
};