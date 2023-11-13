// m3hu1
class Solution {
public:
    void merge(vector<int> & coins, const unsigned int & startIndex, const unsigned int & mid, const unsigned int & endIndex) {
        unsigned int left = startIndex;
        unsigned int right = mid + 1;
        vector<unsigned int> temp;
        while (left <= mid && right <= endIndex) {
            if (coins[left] < coins[right]) 
                temp.push_back(coins[left++]);
            else 
                temp.push_back(coins[right++]);
        }
        while (left <= mid) {
            temp.push_back(coins[left++]);
        }
        while (right <= endIndex) {
            temp.push_back(coins[right++]);
        }
        for (unsigned int i = startIndex; i <= endIndex; i++) {
            coins[i] = temp[i - startIndex];
        }
    }

    void mergeSort(vector<int>& coins, const unsigned int & startIndex, const unsigned int & endIndex) {
        if (startIndex < endIndex) {
            unsigned int mid = startIndex + (endIndex - startIndex) / 2;
            mergeSort(coins, startIndex, mid);
            mergeSort(coins, mid + 1, endIndex);
            merge(coins, startIndex, mid, endIndex);
        }
    }
    int coinChange(vector<int>& coins, unsigned int amount) {
        if (amount == 0) return 0;
        unsigned int sized = coins.size();
        vector<int> nums;
        for (unsigned int i = 0; i <= amount; ++i) {
            nums.push_back(-1);
        }
        nums[0] = 0;
        unsigned int startIndex = 0;
        mergeSort(coins, startIndex, sized - 1);
        for (unsigned int indexNums = 0; indexNums <= amount; indexNums++) {
            int currVal = nums[indexNums];
            if (currVal == -1) continue;
            for (auto &indexCoins : coins) {
                unsigned int futureIndex = indexNums + indexCoins;
                if (futureIndex > amount) continue;
                if (nums[futureIndex] == -1 || nums[futureIndex]>currVal+1) nums[futureIndex] = currVal + 1;
            }
        }
        return nums[amount];
    }
};