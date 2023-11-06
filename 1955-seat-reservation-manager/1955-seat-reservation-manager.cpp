// m3hu1
class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>>p;
    int available_seat;
    SeatManager(int n) {
        available_seat = 1;
    }
    
    int reserve() {
        if(!p.empty())
        {
            int seat = p.top();
            p.pop();
            return seat;
        }
       int seat = available_seat;
        available_seat++;
        return seat;
    }
    
    void unreserve(int seatNumber) {
        p.push(seatNumber);
    }
};