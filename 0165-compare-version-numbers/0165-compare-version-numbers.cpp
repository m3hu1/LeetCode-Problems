class Solution {
public:
    void split(string &version, vector <string> &v, char delim) {
        int start = 0;
        int end = version.find(delim);
        while (end != string::npos) {
            v.push_back(version.substr(start, end - start));
            start = end + 1;
            end = version.find(delim, start);
        }
        v.push_back(version.substr(start, end));
    }

    int compareVersion(string version1, string version2) {
        vector <string> v1;
        vector <string> v2;
        split(version1, v1, '.');
        split(version2, v2, '.');
        int len1 = v1.size();
        int len2 = v2.size();
        for (int i = 0; i < max(len1, len2); i++) {
            int num1 = (i < len1) ? stoi(v1[i]) : 0;
            int num2 = (i < len2) ? stoi(v2[i]) : 0;
            if (num1 < num2) return -1;
            else if (num1 > num2) return 1;
        }
        return 0;
    }
};