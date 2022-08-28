class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i=0;
while(i<s.length()){
       if(s.substr(i,part.length())==part){
           s.erase(i,part.length());
           if(i>part.length())
               i=i-part.length();
           else 
               i=0;
           }
    else 
        i++;
    }
        return s;
        }
};