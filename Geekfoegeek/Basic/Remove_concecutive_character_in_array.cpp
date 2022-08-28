//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        vector<char>str;
        str.push_back(S[0]);
        int k=1;
     //   str.push_back(S[0]);
        for(int i=1;i<S.length();i++){
            if(S[i]!=S[i-1])
            str.push_back(S[i]);
        }
        string s(str.begin(),str.end());
   
        return s;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends