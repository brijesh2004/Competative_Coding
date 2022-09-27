/*

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
     Node * temp=head;
     string str="";
     while(temp!=NULL){
         str+=temp->data;
         temp=temp->next;
     }
     string str1=str;
     reverse(str1.begin(),str1.end());
     if(str1==str)
     return true;
     
     return false;
    }
};