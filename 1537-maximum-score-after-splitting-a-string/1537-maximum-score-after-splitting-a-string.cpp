class Solution {
public:
    int maxScore(string s) {
        int onecount=0, zerocount=0, score = 0,currscore;
        for(int i=0; i<s.length(); ++i)
            if(s[i] == '1')
                ++onecount;
        for(int i=0; i<s.length()-1; ++i)
        {
            if(s[i] == '0')
                ++zerocount;
            else
                --onecount;
            currscore = zerocount + onecount;
            if(currscore > score)
                score = currscore;
        }
        return score;
    }
};