class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
       
       if(R == 0)
       {
           return 1;
       }
           
       long temp =power(N , R/2);
       long rem = (temp * temp)%mod; 
      
       if(R%2==1)
       {
         rem = (rem * N)%mod;
       }
       return rem;
        
    }

};