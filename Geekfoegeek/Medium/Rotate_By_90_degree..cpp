//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
int n=matrix[0].size();
int r[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        r[i][j]=matrix[j][n-1-i];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        matrix[i][j]=r[i][j];
    }
}
}