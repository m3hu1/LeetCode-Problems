// m3hu1
class RandomizedSet {
private:
    unordered_map<int, int> m;
    vector<int> ans;
public:
    RandomizedSet() {

    }
    bool insert(int val) {
        if(m.count(val)!= 0) 
            return false;
        m[val] = ans.size(); 
        ans.push_back(val); 
        return true;
    }
    bool remove(int val) {
        if(m.count(val)!=0)
        {
            int index = m[val]; 
            int lastvalue = ans.back(); 
            ans[index] = lastvalue;
            ans.pop_back(); 
            m[lastvalue] = index;
            m.erase(val);
            return true;
        }
        return false;   
    }
    
    int getRandom() {
        int randomIndex = rand() % ans.size();
        return ans[randomIndex];
    }
};