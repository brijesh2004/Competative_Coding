//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m==n){
            return -1;
        }
        int c=m^n;
        int count=1;
        while(c>0){
            if(c&1){
                return count;
            }
            count++;
            c=c>>1;
        }
      
    }
};