struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/

Node* reverseDLL(Node * head)
{
    //Your code here
Node * temp=head;
Node * an=NULL;
while(temp!=NULL){
    if(an==NULL){
        Node *t=new Node(temp->data);
        an=t;
    }
    else{
        Node * t=new Node(temp->data);
        t->next=an;
        an->prev=t;
        an=t;
}
temp=temp->next;
}
return an;
}