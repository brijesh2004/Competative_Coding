//User function Template for C++


class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
   int mask=(1<<(k));
   int res=n&mask;
   if(res==0)
   return 0;
   return 1;
    }
};