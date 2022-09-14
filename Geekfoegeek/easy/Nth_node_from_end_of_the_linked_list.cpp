

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
int getlength(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here

int len= getlength(head);

int position=  len-n+1;
if(position<=0){
    return -1;
}
int cnt=1;
while(cnt<=position){
    int v=head->data;
    if(cnt==position)
    return v;
    head=head->next;
    cnt++;
}

return -1;
}