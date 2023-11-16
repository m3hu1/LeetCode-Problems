// m3hu1
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int i =0; 
        string ans;  
        for(string &str: nums){
            ans.push_back(str[i]=='0'?'1':'0');
            i++;  
        }
        return ans; 
    }
};