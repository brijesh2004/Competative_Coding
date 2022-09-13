//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
int n=N;
if(n==1)
return {0,1};
int i=0;
int sum=0;
while (n>0){
           sum+=pow(2,i);
           n=n/2;
           i++;
       }
       return {sum-N,sum};
    }
};