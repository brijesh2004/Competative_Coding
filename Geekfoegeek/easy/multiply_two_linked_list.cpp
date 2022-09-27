
/* Linked list node structure
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};*/

/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/

/*You are required to complete this method*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
Node* temp=l1;
Node * temp1=l2;
long long int sum1=0;
long long int sum2=0;
while (temp!=NULL){
    int v=temp->data;
    sum1=(sum1*10+v)%1000000007;
    temp=temp->next;
}
while (temp1!=NULL){
    int v=temp1->data;
    sum2=(sum2*10+v)%1000000007;
    temp1=temp1->next;
}
long long sum=((sum1%1000000007)*(sum2%1000000007))%1000000007;
return sum;

}