// m3hu1
// class Solution {
// public:
//     int snakesAndLadders(vector<vector<int>>& board) {
//         int n = board.size();
//         vector<int> flattenBoard(n*n+1);
//         bool isForward = true;

//         for(int i = n, idx = 1; i>= 0; i--){
//             if(isForward){
//                 for(int j= 0; j < n; j++){
//                     flattenBoard[idx++] = board[i][j];
//                 }
//             }else{
//                 for(int j = n-1; j>= 0; j--){
//                     flattenBoard[idx++] = board[i][j];
//                 }
//             }
//             isForward = !isForward;
//         }
//         vector<int> distance(n*n+1, INT_MAX);
//         queue<int> q;
//         distance[1] = 0;
//         q.push(1);

//         while(!q.empty()){
//             int curr = q.front();
//             q.pop();

//             for(int i = 1; i<=6; i++){
//                 int next = curr +i;
//                 if(next > n*n){
//                     break;
//                 }

//                 if(flattenBoard[next] != -1){
//                     next = flattenBoard[next];
//                 }

//                 if(distance[next] == INT_MAX){
//                     q.push(next);
//                     distance[next] = distance[curr] + 1;
//                 }
//             }
//         }

//         if(distance[n*n] == INT_MAX){
//             return -1;
//         }
//         else{
//             return distance[n*n];
//         }
//     }
// };

class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<int> flattenedBoard(n * n + 1);
        bool isForward = true; // Flag to determine the movement direction

        for (int i = n - 1, idx = 1; i >= 0; i--) {
            if (isForward) {
                for (int j = 0; j < n; j++) {
                    flattenedBoard[idx++] = board[i][j];
                }
            } else {
                for (int j = n - 1; j >= 0; j--) {
                    flattenedBoard[idx++] = board[i][j];
                }
            }
            isForward = !isForward;
        }
        
        vector<int> distance(n * n + 1, INT_MAX); // Distance array to store minimum moves
        queue<int> q;
        distance[1] = 0; // Start position
        q.push(1);
        
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            
            for (int i = 1; i <= 6; i++) {
                int next = curr + i;
                if (next > n * n) {
                    break;
                }
                
                if (flattenedBoard[next] != -1) {
                    next = flattenedBoard[next];
                }

                if (distance[next] == INT_MAX) {
                    q.push(next);
                    distance[next] = distance[curr] + 1;
                }
            }
        }
        
        return distance[n * n] == INT_MAX ? -1 : distance[n * n];
    }
};