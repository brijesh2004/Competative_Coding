//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
  int temp=n;
    int noOfBits=floor(log2(n)) + 1;
    for(int i=0;i<noOfBits;i+=2){
        int firstBit=(temp&1);
        temp=temp>>1;
        int secondBit=(temp&1);
        temp=temp>>1;
        
        if(firstBit!=secondBit){
            int mask=3<<i;
            n=(n^mask);
        }
    }
    return n;

    }
};