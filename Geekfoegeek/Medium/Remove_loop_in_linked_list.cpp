structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
    //   Node *temp=head;
    //   Node* prev;
    //   while(prev->next!=NULL)
    //   {
    //       if(temp->data==-1){
    //           break;
    //       }
    //       temp->data=-1;
    //       prev=temp;
    //       temp=temp->next;
    //   }
    //   prev->next=NULL;
       
    //   }
    
    Node * temp=head;
    Node * prev;
    while(temp!=NULL){
        if(temp->data== -1){
            break;
        }
         temp->data=-1;
         prev=temp;
    temp=temp->next;
    
    }
   prev->next=NULL;
    }
};