//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        unsigned int count=1;
        while(n>0){
            if(n&1){
                return count;
            }
            n=n>>1;
            count++;
        }
        return 0;
    }
};