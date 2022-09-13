class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
sort(A,A+n);
for(int i=0;i<n;i++){
    int s=i+1;
    int e=n-1;
    while (s<e){
        long long sum;
        sum=A[i]+A[s]+A[e];
        if(sum>X){
            e--;
        }
        else if(sum<X)
        s++;
        else
  return 1;
    }
}
return 0;
}

};