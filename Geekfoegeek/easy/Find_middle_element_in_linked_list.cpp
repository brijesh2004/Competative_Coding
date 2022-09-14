/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    int getlength(Node *head){
        Node *temp=head;
        int len=1;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
       
        // Your code here
   int len=getlength(head);
 //  return len;
   int middle;
    middle=len/2+1;

   int cnt=1;
   Node * temp=head;
   
   while(cnt<=middle){
       if(cnt==middle)
           return temp->data;
      cnt++;
       temp=temp->next;
       
   }
    }
};