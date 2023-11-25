// m3hu1
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) 
    {
        queue<pair<string,int>> q;
        unordered_set<string> s(wordList.begin(),wordList.end());

        q.push({beginWord,1});
        s.erase(beginWord);
        
        if(s.find(endWord)==s.end())
        return 0 ; 

        while(q.size())
        {
            string word = q.front().first;
            int steps  = q.front().second;
            q.pop();
            if(word==endWord)
            return steps;

            for(int i = 0; i<word.size();i++)
            {
                char temp = word[i];
                for(char curr = 'a';curr<='z';curr++)
                {
                    word[i] = curr; 
                    if(s.find(word)!=s.end())
                    {
                        q.push({word,steps+1});
                        s.erase(word);
                    }
                }
                word[i] = temp;

            }
        }


        return  0; 

    }
};