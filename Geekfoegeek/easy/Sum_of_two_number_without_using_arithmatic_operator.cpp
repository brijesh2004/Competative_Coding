//User function Template for C++

class Solution
{
    public:
    int sum(int a , int b)
    {
        //code here
while(b!=0){
           int carry=a&b;//to store the carry 
            a=a^b;//to add the number
            b=carry<<1; //to put it into correct position
       }
       return a;

    }
};