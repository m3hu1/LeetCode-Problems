// m3hu1
class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        double rev=0;
        if(x<0){
            return false;
        }
        while(x){
            rev=rev*10+x%10;
            x/=10;
        }
        if(rev==temp){
            return true;
        }
        return false;
    }
};
