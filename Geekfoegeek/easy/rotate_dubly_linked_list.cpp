
/*
typedef struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
} Node;
*/

class Solution {
public:
    Node *rotateDLL(Node *start,int p)
    {
        //Add your code here
Node* pre=NULL;
Node* curr=start;
while(p--){
    pre=curr;
    curr=curr->next;
}
// prev will be the last element of the new list 
pre->next=NULL;
// curr will be the first element of the new list 
curr->prev=NULL;
Node* newlist=curr;
while(curr->next!=NULL){
    curr=curr->next;
}
curr->next=start;
start->prev=curr;
return newlist;
    }
};