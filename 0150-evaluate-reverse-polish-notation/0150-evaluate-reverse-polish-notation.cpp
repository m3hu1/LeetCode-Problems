// m3hu1
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stOps;
         for (int i = 0; i < tokens.size(); i++) {
             if (tokens[i] == "+") {
                 int a = stOps.top();
                 stOps.pop();
                 int b = stOps.top();
                 stOps.pop();
                 stOps.push(a+b);
             }
             else if (tokens[i] == "-") {
                 int a = stOps.top();
                 stOps.pop();
                 int b = stOps.top();
                 stOps.pop();
                 stOps.push(b- a);
             }
             else if (tokens[i] == "*") {
                 int a = stOps.top();
                 stOps.pop();
                 int b = stOps.top();
                 stOps.pop();
                 stOps.push(a * b);
             }
             else if(tokens[i] == "/"){
                 int a = stOps.top();
                 stOps.pop();
                 int b = stOps.top();
                 stOps.pop();
                 stOps.push(b / a);
             }
             else {
                 stOps.push(stoi(tokens[i]));
             }

         }

         return stOps.top();
    }
};