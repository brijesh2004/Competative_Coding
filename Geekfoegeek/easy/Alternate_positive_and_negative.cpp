//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
vector<int>positive;
vector<int>negative;
vector<int>alternate;
for(int i=0;i<n;i++){
   if(arr[i]>=0)
   positive.push_back(arr[i]);
   else
negative.push_back(arr[i]);
}
int i=0,j=0;
while(i<positive.size()&&j<negative.size()){
    alternate.push_back(positive [i]);
    alternate.push_back(negative [j]);
    i++;
    j++;
}
while(i<positive.size())
alternate.push_back(positive [i++]);
while(j<negative.size())
alternate.push_back(negative [j++]);
for(int k=0;k<alternate.size();k++){
    arr[k]=alternate[k];
}
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends