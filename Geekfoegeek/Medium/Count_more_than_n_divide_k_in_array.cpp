class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
sort(arr,arr+n);
map<int,int>mapping;
for(int i=0;i<n;i++){
    mapping[arr[i]]++;
}
 int ct=0;
       for(auto x:mapping)
       {
           if(x.second>(n/k))
               ct++;
       }
       return ct;
    }
};