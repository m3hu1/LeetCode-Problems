// m3hu1
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int p=0;
        int c=0;
        for(int i=0; c<arr.size() && c!=k; ++i)
        {
            if(i == arr.size())            
                i=0;
            else if(p==i)
                continue;
            if(arr[p] > arr[i])    
                ++c;
            else 
            {
                p = i;
                c = 1;
            }
        }
        return arr[p];
    }
};