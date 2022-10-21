//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        vector<int>ans;
        int count = 0;
        int total = R*C;
        // index initialization 
        int StartingRow=0;
        int StartingCol=0;
        int EndingRow=R-1;
        int EndingCol=C-1;
        while(count<total){
            // store starting row
            for(int index=StartingCol;count<total&&index<=EndingCol;index++){
                ans.push_back(a[StartingRow][index]);
                count++;
            }
            StartingRow++;
            
            // store ending col
            
             for(int index=StartingRow;count<total&&index<=EndingRow;index++){
                ans.push_back(a[index][EndingCol]);
                count++;
            }
           EndingCol--;
           
           // store ending row
            for(int index=EndingCol;count<total&&index>=StartingCol;index--){
                ans.push_back(a[EndingRow][index]);
                count++;
            }
           EndingRow--;
           
           
          // store starting col  
          
                for(int index=EndingRow;count<total&&index>=StartingRow;index--){
                ans.push_back(a[index][StartingCol]);
                count++;
            }
          StartingCol++;
           
        }
        reverse(ans.begin(),ans.end());
         return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends