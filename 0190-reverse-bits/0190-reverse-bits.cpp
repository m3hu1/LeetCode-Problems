// m3hu1
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        int i = 0;
        while(i <= 31){
            int b = n & 1;
            n = n >> 1;
            ret = ret << 1;
            ret = ret | b;
            i++;
        }
        return ret;
    }
};