class Solution {
    string uppertolower(string str){
 for(int i=0;i<str.length();i++){
     if(str[i]>='A'&&str[i]<='Z'){
         str[i]=str[i]+32;

        }
     }
        return str;
        }
    
public:
    bool isPalindrome(string s) {
        string str1;
        string str;
        
 for(int i=0;i<s.length();i++){
 if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
             str1.push_back(s[i]);
     }
        str=uppertolower(str1);
  
    
 
int start=0,end=str.length()-1;
        while(start<=end){
            if(str[start]!=str[end])
                return false;
            else {
                start++;
                end--;
                }
            }
 
        return true;
    }
};