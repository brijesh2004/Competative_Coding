

class Solution
{
    bool binarysearch (vector<int>l,int s,int e ,int x){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(l[mid]==x)
            return 1;
            else if(l[mid]>x){
                e=mid-1;
            }
            else 
            s=mid+1;
        }
        return 0;
    }
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        //creating a 1 D vector 
        vector<int>l;
        // adding the value to the vector 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               l.push_back(matrix[i][j]);
            }
        }
        //sort the 1D vector 
        sort(l.begin(),l.end());
        // call the binary search function 
        return binarysearch (l,0,m*n-1,x);
    }
};