//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
       
        int c=a^b;
         bitset<32>b1(c);
        return b1.count();;
        
        
    }
};