class Solution {
public:
    int reverse(int x) {
       
         
       long int rem,t,rev=0;
        while(x!=0){
            rem=x%10;
            rev = rev*10+rem;
            x=x/10;
            }
        if(rev>=pow(-2,31)&&rev<=(pow(2,31)-1))
        return rev;
        else 
            return 0;
    }
};