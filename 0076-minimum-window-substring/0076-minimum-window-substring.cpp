// m3hu1
class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> s1(52,0);
        vector<int> t1(52,0);
        int idx = 0, startidx = 0, count = 0, lastidx = INT_MAX, sizes = s.size(), sizet = t.size();
        if(sizes < sizet) return "";
        for(int i=0; i<sizet; i++)
        {
            if(t[i] > 64 && t[i]<91)
            t1[(t[i]-'A')+26]++;
            else
            t1[t[i]-'a']++;
        }
        for(int i=0; i<sizes; i++)
        {
            if(s[i] > 64 && s[i]<91)
            s1[(s[i]-'A')+26]++;
            else
            s1[s[i]-'a']++;
            
            if(s[i] > 64 && s[i]<91){
            if(s1[(s[i]-'A')+26] <= t1[(s[i]-'A')+26])
            {
                count++;
            }
            }else
            {
                if(s1[s[i]-'a'] <= t1[s[i]-'a'])
            {
                count++;
            }
            }
            while(count == sizet)
            {
                if((i-idx)+1 < lastidx)
                {
                    lastidx = (i-idx)+1;
                    startidx = idx; 
                }
                if(s[idx] > 64 && s[idx]<91)
                s1[(s[idx]-'A')+26]--;
                else
                s1[s[idx]-'a']--;
                
                if(s[idx]>64 && s[idx]<91)
                {
                    if(s1[(s[idx]-'A')+26] < t1[(s[idx]-'A')+26])
                    {
                        count--;
                    }
                }
                else{
                if(s1[s[idx]-'a'] < t1[s[idx]-'a'])
                {
                    count--;
                }
                }
                idx++;
            }
        }
        if(lastidx != INT_MAX)
        return s.substr(startidx,lastidx);
        return "";
    }
};