

/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
int getlen(Node * head){
    int len=0;
    Node * temp=head;
    while(temp!=NULL){
       len++;
       temp=temp->next;
    }
    return len;
}
int fractional_node(struct Node *head, int k)
{
    // your code here
int len=getlen(head);
  Node * temp= head;
  if(k>len)
  return -1;
  int term=ceil(len*1.0/k);
  
  int cnt=1;
  while(cnt<=term){
      if(cnt==term){
          return temp->data;
      }
      temp=temp->next;
      cnt++;
  }
  return -1;
}