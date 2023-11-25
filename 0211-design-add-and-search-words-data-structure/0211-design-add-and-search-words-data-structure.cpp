// m3hu1
class WordDictionary {

public:
    unordered_map<int, vector<string>> m_mapLength;
    unordered_map<string, int> m_mapOrigin;
    WordDictionary() {
    }
    
    void addWord (string word)
    {
        unordered_map<string, int>::iterator it = m_mapOrigin.find (word);
        if (it == m_mapOrigin.end ())
        {
            m_mapLength[word.size ()].push_back (word);
            m_mapOrigin[word] = 1;
        }
            
    }
    bool search(string word) {
        if (word.find ('.') == string::npos)
            return m_mapOrigin.count (word);
        vector<string>& vecWords = m_mapLength[word.size ()];
        const int iSize = vecWords.size ();
        if (iSize == 0) 
            return false;
        const int iSizeWord = vecWords[0].size ();
        for (int i = 0 ; i < iSize ; i++)
        {
            string& strWord = vecWords[i];
            int j;
            for (j = 0 ; j < iSizeWord ; j++)
            {
                char c = word[j];
                if (c == '.')
                    continue;
                if (c != strWord[j])
                    break;
            }
            if (j == iSizeWord)
                return true;
        } 
        return false;
    }
};