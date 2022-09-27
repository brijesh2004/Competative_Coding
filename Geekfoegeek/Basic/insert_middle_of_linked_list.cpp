
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
int getlength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
if(head==NULL)
return head;
//Node * temp=head;
Node * temp=head;
int len=getlength(head);

int middle=ceil(len*1.0/2+1);
int cnt=1;
while(cnt<middle-1){
    temp=temp->next;
    cnt++;
}
Node* insert=new Node(x);
insert->next=temp->next;
temp->next=insert;
return head;
}



