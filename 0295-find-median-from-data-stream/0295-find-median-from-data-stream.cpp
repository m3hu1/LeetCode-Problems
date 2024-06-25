class MedianFinder {
public:
    priority_queue <int> max_heap;
    priority_queue <int, vector <int>, greater <int>> min_heap;
    MedianFinder() {
        // if element bigger then push into max heap
        // check later maybe wrong
    }
    
    void addNum(int num) {
        if (max_heap.empty() || num <= max_heap.top()) max_heap.push(num); // check if < or >
        else min_heap.push(num);
        if (max_heap.size() > min_heap.size() + 1) { // have to check this 
            min_heap.push(max_heap.top());
            max_heap.pop();
        } else if (min_heap.size() > max_heap.size()) {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }
    // 2,3,4,5 --> 2, 3 4 5 -> 2, 3 and 4, 5 -> 2 and 3,4,5 even len
    // odd len 1,2,3 1 and 2,3 -> ok got it
    double findMedian() {
        if (max_heap.size() == min_heap.size()) {
            return (max_heap.top() + min_heap.top()) / 2.0;
        }
        return max_heap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */