//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
unordered_map<int,int>map;
        for(int i=0;i<n;i++){
           // cin>>a[i];
            map[a[i]]++;
        }
        for(int i=0;i<m;i++){
           // cin>>b[i];
            map[b[i]]++;
        }
        return map.size();
    
    }
};