
class Solution{
public:
    stack<int> Reverse(stack<int> St){
        stack<int>rev;
        while (!St.empty()){
            rev.push(St.top());
            St.pop();
        }
        return rev;
    }
};