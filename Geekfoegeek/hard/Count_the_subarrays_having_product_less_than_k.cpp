

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int p=1,j=0,ans=0;
      for(int i=0;i<n;i++)
      {
          p*=a[i];
          while(j<n && p >= k)
          {
              p/=a[j++];
          }
          if(p<k){
          ans+=(i-j+1);
          }
      }
      return ans;
    }
};