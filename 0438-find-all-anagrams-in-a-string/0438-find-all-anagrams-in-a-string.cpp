// m3hu1
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
           vector<int>hash1(26, 0), hash2(26, 0);
           int n = p.size();
           int m = s.size();
           for(int i=0; i<n; i++){
               hash1[p[i] - 'a']++;
           }

           int i=0, j=0, c=0;
           vector<int> ans;
           while(i < m){
               hash2[s[i] - 'a']++;
               if(i >= n){
                   hash2[s[j] - 'a']--;
                   j++;
               }
               if(hash1 == hash2){
                   ans.push_back(i-n+1);
               }             
               i++;
           }
           return ans;
    }
};