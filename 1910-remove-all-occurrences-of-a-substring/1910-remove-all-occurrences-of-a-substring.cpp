class Solution {
public:
    string removeOccurrences(string s, string part) {
        int toDelete = s.find(part);
        while (toDelete != string::npos) {
            s.erase(toDelete, part.size());
            toDelete = s.find(part);
        }
        return s;
    }
};