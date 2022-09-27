
class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
        //code here
        long long n=base;
        return (((n/2)-1)*(n/2))/2;
    }
};