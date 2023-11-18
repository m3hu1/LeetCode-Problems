// m3hu1
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        vector<int> rec;
        for(auto it : words){
            rec.push_back(it.size());
        }
        int n = words.size();
        int i = 0, j = 0;

        while(j < n){
            int size = 0;
            while(j < n && size < maxWidth){
                size += rec[j] + 1;
                j++;
            }
            size--;
            if(size > maxWidth){
                j--;
                size = size - rec[j] - 1;
            }
            int len = j - i;
            int space = maxWidth - size + len - 1; // total spaces that i want to add extra
            int space_left = 0;
            if(len > 1)
                space_left = space % (len - 1); // space left after dividing space between all
            
            int gap_each = 0;
            if(len > 1)
                gap_each = space / (len - 1); // space between all words

            string s = "";
            if(j != n){
                for(i; i < j; i++){
                    s += words[i];
                    if(i != j - 1 && i != n - 1){
                        for(int y = 0; y < gap_each; y++){
                            s += ' ';
                        }
                    }
                    if(space_left){
                        s += ' ';
                        space_left--;
                    }
                }
            }
            else{
                for(i; i < j; i++){
                    s += words[i] + ' ';
                }
                s.pop_back();
            }

            if(s.size() == maxWidth)
                ans.push_back(s);
            else{
                while(s.size() != maxWidth)
                    s += ' ';
                ans.push_back(s);
            }
        }
        return ans;
    }
};