class Solution {
public:
    bool isPathCrossing(string path) {
        vector<vector<int>> map;
        int NS = 0, WE = 0;
        for(int i = 0; i < path.size(); i++){
            if(path[i] == 'N'){
                NS++;
            }
            if(path[i] == 'S'){
                NS--;
            }
            if(path[i] == 'W'){
                WE--;
            }
            if(path[i] == 'E'){
                WE++;
            }
            if(NS == 0 && WE == 0){
                return true;
            }
            for(int j = 0; j < map.size(); j++){
                if((map[j][0] == NS && map[j][1] == WE) || (map[j][0] == 0 && map[j][1] == 0)){
                    return true;
                }
            }
            map.push_back(vector<int>());
            map[i].push_back(NS);
            map[i].push_back(WE);
        }
        return false;
    }
};