//User function Template for C++

class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
        while(n>0){
            if(n&1){
                n=n>>1;
                if(n&1){
                    return 0;
                }
            }
            else {
                n=n>>1;
            }
            
        }
        return 1;
    }
};