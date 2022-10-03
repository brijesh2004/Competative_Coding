
class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
  sort(arr,arr+n);
       
       string str;
       int rem=0;
       
           for(int i=n-1;i>=0;i-=2)
       {
           if(i==1)
           {
               int x=arr[1]+arr[0]+rem;
               str.push_back(x%10+'0');
               x=x/10;
               str.push_back(x+'0');
           }
           else{
          int x=arr[i]+arr[i-1]+rem;
          if(x>=0)
          {
              int y=x%10;
              x=x/10;
              rem=x;
              str.push_back(y+'0');
          }
          else {
              str.push_back(x);
              rem=0;
          }
           }
       
       }
  while(str[str.size()-1]=='0')
  {
      str.pop_back();
  }
      
      reverse(str.begin(),str.end());
      
      return str;
    }
};