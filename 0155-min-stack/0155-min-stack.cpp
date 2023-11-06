// m3hu1
class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        data_.emplace_back(val);
        if (val <= curMin_) {
            minV_.emplace_back(val);
            curMin_ = val;
        }
    }
    
    void pop() {
        int tmpV = data_.back();
        if (tmpV == curMin_) {
            minV_.pop_back();
            curMin_ = (minV_.size() == 0) ? INT_MAX : minV_.back();
        }
        data_.pop_back();
    }
    
    int top() {
        return data_.back();
    }
    
    int getMin() {
        return curMin_;
    }
private:
    vector<int> data_;
    vector<int> minV_;
    int curMin_ = INT_MAX;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */