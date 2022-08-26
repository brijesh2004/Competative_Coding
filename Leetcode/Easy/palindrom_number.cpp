class Solution {
public:
    bool isPalindrome(int x) {
       long long int t=0,rem;
       long long int p=x;
        if(x<0)
            return false;
        while(x!=0){
            rem=x%10;
           t=t*10+rem;
            x=x/10;
            }
        if(t==p)
            return true;
        return false;
    }
    
};