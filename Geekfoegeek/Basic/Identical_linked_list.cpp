
/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
Node * temp1=head1;
Node * temp2=head2;
while(temp1!=NULL&&temp2!=NULL){
    int v1=temp1->data;
    int v2=temp2->data;
    if(v1!=v2){
        return 0;
    }
    temp1=temp1->next;
    temp2=temp2->next;
}
if(temp1!=NULL)
return false;
if(temp2!=NULL)
return false;

return true;
}