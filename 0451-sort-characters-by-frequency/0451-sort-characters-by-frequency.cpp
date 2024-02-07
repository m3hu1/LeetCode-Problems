class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(auto i : s) { // storing the cnt of every char
            mp[i]++;
        }
        multimap<int, char> mm;
        for(auto i : mp) { // storing freq as key and char as value
            mm.insert({i.second, i.first}); // allows sorting
        }
        string str = "";
        for(auto i = mm.rbegin(); i != mm.rend(); i++) { // iterate in reverse order
            str += string(i->first, i->second);
        }
        return str;
    }
};