// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here
       long int s=1;
       long int e=x;
        long long int ans=-1;
      long long  int mid=s+(e-s)/2;
        while(s<=e){
            long long squre=mid*mid;
            if(squre==x)
            return mid;
            if(squre<x){
                ans=mid;
                s=mid+1;
            }
        else{
            e=mid-1;
        }
       mid=s+(e-s)/2;
        }
        return ans;
    }
};