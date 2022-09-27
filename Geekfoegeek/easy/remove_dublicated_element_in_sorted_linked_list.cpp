
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
Node * temp=head;
while (temp->next!=NULL){
    int v1=temp->data;
    int v2=temp->next->data;
    if(v1==v2){
        temp->next=temp->next->next;
      
    }
    else{
        temp=temp->next;
       
    }
}
    return head;
}