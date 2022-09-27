
class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
string ans=arr[0];
int j;
   for(int i=1;i<N;i++){
       for( j=0;j<arr[i].length()&&j<ans.length();j++){
        if(ans[j]!=arr[i][j])

                {

                    ans = ans.substr(0,j);

                    break;

                }
       }
              if(j==arr[i].size())
              {

                   ans=arr[i];

               
       }
   }
 if(ans.length()==0){
       return "-1";
  }
return ans;
    }
};