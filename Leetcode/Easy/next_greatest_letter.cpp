class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char s;
        int i;
 for(i=0;i<letters.size();i++){
     if(letters[i]>target){
         s=letters[i];
         break;
         }
     
      
       }
        if(i==letters.size())
            return letters[0];
            
        return s;

    }
};