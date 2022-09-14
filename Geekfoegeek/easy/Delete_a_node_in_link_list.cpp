

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
if(x==1){
    Node* temp=head;
    head=head->next;
    // memory free 
    temp->next=NULL;
 
    return head;
}
else {
   Node* curr=head;
   Node* prev=NULL;
   int cnt=1;
   while(cnt<x){
       prev=curr;
       curr=curr->next;
       cnt++;
   }
   prev->next=curr->next;
   curr->next=NULL;
   return head;
}
Node * temp=head;
}