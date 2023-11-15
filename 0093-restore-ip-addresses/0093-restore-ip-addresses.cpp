// m3hu1
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> validIpAddresses;
        findIpAddresses(0, 1, s, validIpAddresses);
        return validIpAddresses;
    }
    void static findIpAddresses(int dotCounter, int index, string &s, vector<string> &validIpAddresses)
    {
        if (dotCounter == 3)
        {
            if (validateIpAddress(s))
                validIpAddresses.push_back(s);
            return;
        }
        for (int i = index; i < index + 3 && i < s.size(); i++)
        {
            s.insert(i, ".");
            findIpAddresses(dotCounter + 1, i + 2, s, validIpAddresses);
            s.erase(s.begin() + i);
        }
    }
    bool static validateIpAddress(string &s)
    {
        string ipPartStr;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '.')
                ipPartStr += s[i];
            if (ipPartStr.size() > 0 && stoi(ipPartStr) > 255)
                return false;
            if(ipPartStr.size() >= 2 && ipPartStr[0] == '0')
                return false;
            if (s[i] == '.')
                ipPartStr = "";
        }
        return true;
    }
};