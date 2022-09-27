structure of the node of the list is as
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

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node * temp = head;
        Node * insert = new Node(data);
        // insert at first 
        if(temp->data >=data){
            insert->next=temp;
            temp=insert;
            return temp;
        }
        
        // insert in middle 
        while(temp->next!=NULL){
            int v1=temp->data;
            int v2=temp->next->data;
            if(data>=v1&&data<=v2){
                insert->next=temp->next;
                temp->next=insert;
                return head;
            }
            temp=temp->next;
        }
        // insert at last 
        temp->next=insert;
        insert->next=NULL;
        return head;
        
    }
    
};