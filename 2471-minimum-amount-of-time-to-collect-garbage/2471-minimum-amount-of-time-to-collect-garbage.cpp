// m3hu1
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time = 0;
        
        int n = garbage.size();
        
        int G = 0;
        int M = 0;
        int P = 0;
        
        int total = 0;
        
        for(int i = 0; i < n; i++) {
            
            for(int j = 0; j < garbage[i].length(); j++) {
                
                if(garbage[i][j] == 'M') {
                    M =  i;
                } else if(garbage[i][j] == 'P') {
                    P = i;
                } else {
                    G = i;
                }
                
                total++;
            }
        }
        
        for(int i = 0; i < M; i++) {
            total+=travel[i];
        }
        for(int i = 0; i < P; i++) {
            total+=travel[i];
        }
        for(int i = 0; i < G; i++) {
            total+=travel[i];
        }
        
        return total;
        
    }
};