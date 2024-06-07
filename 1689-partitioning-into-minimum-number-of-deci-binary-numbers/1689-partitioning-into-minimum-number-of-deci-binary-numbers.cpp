class Solution {
public:
    int minPartitions(string n) {
        // Upon observing the test cases, the bottleneck is the number of columns, which is the max digit.
        return *(max_element(n.begin(), n.end())) - '0';
    }
};