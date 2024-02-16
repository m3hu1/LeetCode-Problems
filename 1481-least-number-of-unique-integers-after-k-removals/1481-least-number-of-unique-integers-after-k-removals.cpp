class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map <int, int> mp;
        for(auto i : arr) {
            mp[i]++;
        }
        multimap <int, int> mm;
        for(auto i : mp) {
            mm.insert({i.second, i.first}); // for sorting
        }
        int cnt = 0;
        for(auto i = mm.begin(); i != mm.end(); i++) {
            k = k - i->first;
            if(k < 0) return mm.size() - cnt;
            cnt++;
        }
        return 0;
    }
};