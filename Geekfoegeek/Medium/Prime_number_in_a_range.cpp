//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
vector<int> pri;
vector<bool>primes(N+1,true);
primes[0]=primes[1]=false;
for(int i=2;i<=N;i++){
    if(primes[i]){
        if(i>=M)
        pri.push_back(i);
        for(int j=2*i;j<=N;j=j+i){
            primes[j]=0;
        }
    }
}
return pri;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends