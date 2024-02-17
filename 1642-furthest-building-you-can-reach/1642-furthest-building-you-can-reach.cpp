class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> pq; // min heap
        int n = heights.size();
        for(int i=0; i<n-1; i++) {
            int jump = heights[i+1] - heights[i]; // diff b/w adj buildings
            if(jump > 0) pq.push(jump); // if jump is -ve, we dont need to climb
            if(pq.size() > ladders) { // emergency case
                bricks = bricks - pq.top();
                if(bricks < 0) return i; // cant go any further
                pq.pop();
            }
        }
        return n - 1; // we got to the final building
    }
};