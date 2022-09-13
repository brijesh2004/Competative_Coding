//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
    int n1=array1.size();
    int n2=array2.size();
    vector<int>merge;
    for(int i=0;i<n1;i++){
        merge.push_back(array1[i]);
    }
    for(int i=0;i<n2;i++){
        merge.push_back(array2[i]);
    }
    sort(merge.begin(),merge.end());
    if(merge.size()%2!=0)
    return merge[merge.size()/2];
    else {
        int l=merge.size();
        double k=(merge[l/2]+merge[l/2-1])/2.0;
        return k;
    }
    }
};