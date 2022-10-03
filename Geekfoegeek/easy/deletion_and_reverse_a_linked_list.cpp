
/* structure for a node 
struct Node
{
	int data;
	struct Node *next;
};
*/

/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{

// Your code goes here
Node*curr=*head;
Node* pre=NULL;
while(curr->data!=key){
    pre=curr;
    curr=curr->next;
}
Node * del=curr;
pre->next=curr->next;
delete del;
}

/* Function to reverse the linked list */
 void reverse(struct Node** head)
{

// Your code goes here
  Node *temp = *head;

    if(temp->next == temp) return;

    

    Node *last= temp;

    

    while(last->next != temp){

        last = last->next;

    }

    

    Node *prev = last, *next1=NULL, *curr= *head;

    

    do{

        next1 = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next1;

    }while(curr != temp);

    *head = prev;

}