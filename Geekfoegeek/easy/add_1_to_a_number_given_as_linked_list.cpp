
/* 

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

class Solution
{
     private:
    Node * Reverse(Node * head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node *prev=NULL;
        Node* curr=head;
        Node* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if(head==NULL)
        {
            return head;
        }
        head= Reverse(head);
        Node * temp=head;
      int sum=0;
    int carry=1;
         Node* prev = NULL;
  while(temp!=NULL)
        {
            prev = temp;
            sum = temp->data+carry;
            int rem = sum%10;
            carry=sum/10;
            temp->data=rem;
            temp=temp->next;
        }
        if(carry!=0)
        {
            Node* newNode = new Node(carry);
            prev->next=newNode;
        }
    return Reverse(head);
    }
};