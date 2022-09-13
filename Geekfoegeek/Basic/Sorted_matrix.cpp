// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
vector<int>linear;
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        linear.push_back(Mat[i][j]);
    }
}
sort(linear.begin(),linear.end());
int k=0;
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        Mat[i][j]=linear[k];
        k++;
    }
}
return Mat;
    }
};