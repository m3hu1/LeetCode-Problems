class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int cost = 0;
        int notRemove = 0;
        for (int i = 1; i < colors.size(); ++i) {
            if (colors[i] == colors[notRemove]) {
                if (neededTime[i] < neededTime[notRemove]) {
                    cost += neededTime[i];
                } else {
                    cost += neededTime[notRemove];
                    notRemove = i;
                }
            } else {
                notRemove = i;
            }
        }
        return cost;
    }
};