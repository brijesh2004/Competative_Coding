//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
sort(a+0,a+n);
unsigned long long sum=0;
int mod = 1000000007;
for(int i=0;i<n;i++){
    unsigned long long k=a[i];
    sum=sum+long(k*i);
    sum=sum%mod;
}
return sum;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends