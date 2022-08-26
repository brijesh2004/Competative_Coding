//{ Driver Code Starts
#include<iostream>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int isPowerOfFour(unsigned int n)
    {
      // Your code goes here
if(n==0)
return 0;
while(n!=1){
    if(n%4!=0)
    return 0;
    n=n/4;
}
return 1;
    }
};

//{ Driver Code Starts.

/*Driver program to test above function*/
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
Solution ob;
if(ob.isPowerOfFour(n))
	cout<<1<<endl;
else
	cout<<0<<endl;
}
//getchar();
}

// } Driver Code Ends