// m3hu1
class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {

        string genes = "ACGT";
    unordered_map<string,int> mp;
    
    for (auto i : bank)
    {
        mp[i]++;
    }

    if(mp.find(endGene) == mp.end())
    return -1;
     unordered_map<string,int> vis;
    queue<string> q;
    q.push(startGene);
    vis[startGene] = 1;
    int steps = 0;
    while(!q.empty())
    {
        int sz = q.size();
        while(sz--)
        {
            auto node = q.front();
          
            q.pop();
            if(node== endGene) return steps;
            for (int i = 0; i < 8; i++)
            {
                char og = node[i];
                for (int k = 0; k < 4; k++)
                {
                    
                    if(genes[k] == og ) continue;
                    node[i] = genes[k];
                    if(vis[node]) continue;
                    if(mp.find(node) != mp.end())
                    {vis[node] = 1;
                    q.push(node);
                    }
                }
                node[i] = og;

            }
            
        }
        steps++;
    }
        return -1;
    }
};