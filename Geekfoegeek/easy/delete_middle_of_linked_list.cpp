
/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
int getlen(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
Node* deleteMid(Node* head)
{
    // Your Code Here
Node * temp=head;
int len=getlen(head);
int middle=len/2;
int cnt=1;
while(cnt<=middle){
    if(cnt==middle){
        Node * next_next=temp->next->next;
       Node  * dele=temp->next;
       delete (dele);
       temp->next=next_next;
    }
    else{
        temp=temp->next;
}
cnt++;
}
return head;
}