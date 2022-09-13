class Solution {
  public:
    int findPosition(int n) {
        // code her
      if(n==0)
       return -1;
      int i=0;
      int count=0;
      while(n)
      {
          if(n&1)
          {
            
              count++;
          }
          i++;
          n=n>>1;
      }
      if(count>1 )
      return -1;
      else
      return i;
   
    }
};