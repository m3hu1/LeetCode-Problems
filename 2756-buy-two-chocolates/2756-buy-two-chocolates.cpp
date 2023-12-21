class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
          int n=prices.size();
          int n1=prices[0],n2=prices[1];
          if(n1>n2){swap(n1,n2);}
          for(int i=2;i<n;i++){
              if(n1>prices[i]){
                  n2=n1;
                  n1=prices[i];
              }else if(n2>prices[i]){
                  n2=prices[i];
              }
          }
          if(n1+n2<=money){
              return (money-n1-n2);
          }return money;
    }
};