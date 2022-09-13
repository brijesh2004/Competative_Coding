class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
     long sum = 0L;
       sort(a,a+n);
       for(int i=0;i<n;i++) {
           if(a[i] < 0 && k > 0) {
               a[i] = a[i]*(-1);
               --k;
           }
           sum += a[i];
       }
       sort(a,a+n);
       
       if(k%2 == 0)
       return sum;
       else {
           long t = a[0];
           a[0] = a[0]*(-1);
           sum -= t;
           sum += a[0];
       }
       return sum;
    }
};