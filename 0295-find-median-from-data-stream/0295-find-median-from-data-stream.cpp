// m3hu1
class MedianFinder {
public:
    priority_queue<int, vector<int>, greater<int>> min_heap;
    priority_queue<int, vector<int>> max_heap;
    MedianFinder() {
    }
    void addNum(int num) {
        if (min_heap.size() == max_heap.size()) {
            if (min_heap.size() == 0){
                min_heap.push(num);
                return;
            }
            if (num < min_heap.top()) {
                max_heap.push(num);
            } else {
                min_heap.push(num);
            }
            return;
        }
        if (min_heap.size() < max_heap.size()) {
            if (num > max_heap.top()) {
                min_heap.push(num);
            } else {
                int top = max_heap.top();
                min_heap.push(top);
                max_heap.pop();
                max_heap.push(num);
            }
            return;
        }
        if (min_heap.size() > max_heap.size()) {
            if (num < min_heap.top()) {
                max_heap.push(num);
            } else {
                int top = min_heap.top();
                max_heap.push(top);
                min_heap.pop();
                min_heap.push(num);
            }
            return;
        }
    }
    double findMedian() {
        if (min_heap.size() < max_heap.size()) {
            return max_heap.top();
        }
        if (min_heap.size() > max_heap.size()) {
            return min_heap.top();
        }
        return (max_heap.top() + min_heap.top())/2.0;
    }
};
