
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
       stack<int>st;
       st=s;
        for(int i=0;i<sizeOfStack;i++){
            if(i==(sizeOfStack/2)){
                s.pop();
            }
            else{
            st.push(s.top());
            s.pop();
        }
    }
    for(int i=0;i<sizeOfStack-1;i++){
        s.push(st.top());
        st.pop();
    }
    }
};