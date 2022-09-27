  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
    if(head==NULL){
      return NULL;
    }
    // Step1 reverse first k nodes 
    node * next=NULL;
    node* curr=head;
    node* prev=NULL;
    int cnt=0;
    while (curr!=NULL&&cnt<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    // recursion
    if(next!=NULL){
        head->next=reverse (next,k);
    }
    return prev;
    }
};