// m3hu1
class Solution {
public:
    string sortVowels(string s) {
        vector<char>str;
        for(auto i :s){
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||
            i=='A'||i=='E'||i=='I'||i=='O'||i=='U'){
                str.push_back(i);
            }
        }
        sort(str.begin(),str.end());
        int j = 0  ; 
        int n = str.size();
        for(int i = 0 ; i<s.size();i++){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=str[j++];
            }
        }
        return s;
    }
};