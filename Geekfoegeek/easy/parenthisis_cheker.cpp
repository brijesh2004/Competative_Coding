
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
stack<char>S;
for(int i=0;i<x.length();i++){
    char ch=x[i];
    
    // if opening bracket, then push in stack 
    // if closing bracelet, stack top check an pop 
    if(ch=='('||ch=='{'||ch=='['){
        S.push(ch);
    }
    else {
        // for closing bracket
        if(!S.empty()){
            char top=S.top();
            if((ch==')' &&top=='(' )||
            (ch=='}'&&top=='{')||
            (ch==']'&&top=='[')){
                S.pop();
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
}
if(S.empty())
return true;
else 
return false;
    }

};