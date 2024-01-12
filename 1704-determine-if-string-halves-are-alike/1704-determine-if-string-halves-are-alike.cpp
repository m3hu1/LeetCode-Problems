class Solution {
private:
    static bool isvowel(const char &ch)
    {
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
    }
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(i<n/2 && isvowel(s[i]))cnt1++;
            else if(i>=n/2 && isvowel(s[i]))cnt2++;
        }
        return cnt1==cnt2;
    }
};