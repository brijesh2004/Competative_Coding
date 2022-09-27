
/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
Node * dummy=new Node(-1);
Node * temp1=head1;
Node * temp2=head2;
Node * prev=dummy;
Node * intersection=NULL;
while (temp1!=NULL&&temp2!=NULL){
    int v1=temp1->data;
    int v2=temp2->data;
    if(v1==v2){
        Node * node=new Node(temp1->data);
        prev->next=node;
        prev=node;
        temp1=temp1->next;
        temp2=temp2->next;
        
    }
    else if(v1>v2){
        temp2=temp2->next;
}
else {
    temp1=temp1->next;
}
}
return dummy->next;
}