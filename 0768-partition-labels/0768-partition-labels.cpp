// m3hu1
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> endmap (26,-1);
        vector<int> startmap (26,-1);
        for(int i =0;i<s.length();++i){
            if(startmap[s[i] - 'a'] == -1){
                startmap[s[i] - 'a'] = i;
            }
            endmap[s[i] - 'a'] = i;
        }
        int index = 0;
        vector<int> result;
        while(index < s.length()){
            int basicend = endmap[s[index] - 'a'];
            for(int i = index;i<basicend;++i){
                basicend = max(basicend,endmap[s[i]-'a']);
            }
            int len = basicend - index + 1;
            result.push_back(len);
            index = basicend + 1;
        }
        return result;
    }
};