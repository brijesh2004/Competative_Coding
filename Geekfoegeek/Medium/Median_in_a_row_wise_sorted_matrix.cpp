//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
        //creating a vector for storing the 2D array into 1D array
        vector<int>Linear;
     for(int i=0;i<r;i++){
         for(int j=0;j<c;j++){
             Linear.push_back(matrix[i][j]);
         }
     }
     sort(Linear.begin(),Linear.end());
     return Linear[(r*c)/2];
    }
};