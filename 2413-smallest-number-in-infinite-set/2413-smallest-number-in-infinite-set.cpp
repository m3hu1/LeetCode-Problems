// m3hu1
class SmallestInfiniteSet {
public:
    int cur;
    set<int> set;
    SmallestInfiniteSet() {
        cur=1;
    }
    int popSmallest() {
        if(!set.empty()){
            int res=*set.begin();
            set.erase(res);
            return res;
        }
        else{
            cur++;
            return cur-1;
        }
    }
    void addBack(int num) {
        if(cur>num) set.insert(num);
    }
};